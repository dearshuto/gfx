#include <sj/gfx.h>

#include <iostream>

int main()
{
    sj::gfx::Initialize();

    sj::gfx::TDevice<sj::gfx::vk::DeviceVk> device;
    device.Initialize(sj::gfx::DeviceInfo{});
    device.Finalize();

    sj::gfx::TQueue<sj::gfx::vk::QueueVk> queue;

    sj::gfx::Finalize();

    std::cout << "Hello World" << std::endl;
    return EXIT_SUCCESS;
}
