#include <sj/gfx.h>
#include <sj/gfx/detail/gfx_DeviceConcept.h>
#include <sj/gfx/gl/gfx_DeviceGl.h>

#include <iostream>

int main()
{
    sj::gfx::TDevice<sj::gfx::gl::DeviceGl> device;
    device.Initialize(sj::gfx::DeviceInfo{});
    device.Finalize();

    std::cout << "Hello World" << std::endl;
    return EXIT_SUCCESS;
}
