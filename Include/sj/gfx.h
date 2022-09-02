#include <sj/gfx/gfx_DeviceInfo.h>
#include <sj/gfx/gfx_QueueInfo.h>

// Templates
#include <sj/gfx/gfx_DeviceTemplate.h>
#include <sj/gfx/gfx_Queue.h>

// OpenGL
#include <sj/gfx/gl/gfx_DeviceGl.h>

// Vulkan
#include <sj/gfx/vk/gfx_DeviceVk.h>
#include <sj/gfx/vk/gfx_QueueVk.h>

namespace sj::gfx {

void Initialize() noexcept;

void Finalize() noexcept;

}  // namespace sj::gfx
