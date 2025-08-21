use std::ops::Deref;

use eframe::run_native;

fn main() {
    let options = eframe::NativeOptions::default();

    eframe::run_native("gfx", options, Box::new(|cc| Ok(Box::new(App::new(cc))))).unwrap();
}

struct App {}

impl App {
    pub fn new(cc: &eframe::CreationContext) -> Self {
        let wgpu_state = cc.wgpu_render_state.as_ref().unwrap();
        let entry = unsafe { ash::Entry::from_static_fn(vknew::wgpu::get_static_fn()) };
        let _info = vknew::wgpu::WasmCompatibilityCreateInfo::from_instance(
            wgpu::Instance::default(),
            wgpu_state.device.clone(),
            wgpu_state.queue.clone(),
            wgpu_state.adapter.clone(),
        );

        Self {}
    }
}

impl eframe::App for App {
    fn update(&mut self, ctx: &eframe::egui::Context, frame: &mut eframe::Frame) {
        eframe::egui::SidePanel::left("Left").show(ctx, |ui| {
            if ui.button("Hello World").clicked() {
                println!("Clicked");
            }
        });
    }
}

struct Triangle;
impl eframe::egui_wgpu::CallbackTrait for Triangle {
    fn paint(
        &self,
        info: eframe::egui::PaintCallbackInfo,
        render_pass: &mut wgpu::RenderPass<'static>,
        callback_resources: &eframe::egui_wgpu::CallbackResources,
    ) {
        vknew::wgpu::interoperability::push_draw_command(
            render_pass,
            ash::vk::Device::null(),
            ash::vk::CommandBuffer::null(),
        );
    }
}
