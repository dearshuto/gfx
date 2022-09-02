#ifndef gfx_DeviceVk_h
#define gfx_DeviceVk_h

#include <vulkan/vulkan.hpp>

namespace sj::gfx {
class DeviceInfo;
}

namespace sj::gfx::vk {

class DeviceVk
{
public:
    void Initialize(const DeviceInfo& deviceInfo) noexcept;

    void Finalize() noexcept;

private:
    VkInstance m_Instance;
    VkDevice m_Device;
};

}  // namespace sj::gfx::vk

#endif /* gfx_DeviceVk_h */
