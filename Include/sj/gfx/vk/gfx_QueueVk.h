#ifndef gfx_QueueVk_h
#define gfx_QueueVk_h

#include <sj/gfx/detail/gfx_QueueConcept.h>
#include <vulkan/vulkan.h>

namespace sj::gfx {
class QueueInfo;
}

namespace sj::gfx::vk {

class DeviceVk;

class QueueVk final
{
public:
    using DeviceType = DeviceVk;

public:
    QueueVk() noexcept = default;

    ~QueueVk() noexcept = default;

    void Initialize(DeviceVk* pDevice, const QueueInfo& info) noexcept;

    void Finalize(DeviceVk* pDevice) noexcept;

    VkQueue GetQueue() const noexcept { return m_Queue; }

private:
    VkQueue m_Queue = VK_NULL_HANDLE;
};

}  // namespace sj::gfx::vk

#endif /* gfx_QueueVk_h */
