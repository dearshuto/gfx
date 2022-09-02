#include <sj/gfx/vk/gfx_DeviceVk.h>

#include <vulkan/vulkan.hpp>

namespace sj::gfx::vk {

void DeviceVk::Initialize(const DeviceInfo &deviceInfo) noexcept
{
    VkApplicationInfo applicationInfo;
    applicationInfo.apiVersion       = VK_API_VERSION_1_3;
    applicationInfo.pApplicationName = "simple";

    VkInstanceCreateInfo instanceCreateInfo;
    instanceCreateInfo.pApplicationInfo = nullptr;
    instanceCreateInfo.pApplicationInfo = &applicationInfo;
    vkCreateInstance(&instanceCreateInfo, nullptr, &m_Instance);
}

void DeviceVk::Finalize() noexcept { vkDestroyInstance(m_Instance, nullptr); }

}  // namespace sj::gfx::vk
