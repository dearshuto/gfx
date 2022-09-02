#include <sj/gfx/vk/gfx_QueueVk.h>

namespace sj::gfx::vk {

void QueueVk::Initialize(DeviceVk *pDevice, const QueueInfo &info) noexcept {}

void QueueVk::Finalize(DeviceVk *pDevice) noexcept { m_Queue = VK_NULL_HANDLE; }

}  // namespace sj::gfx::vk
