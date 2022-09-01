#ifndef _SJ_GFX_DEVICECONCEPT_H_
#define _SJ_GFX_DEVICECONCEPT_H_

#include <sj/gfx/gl/gfx_DeviceGl.h>

#include <concepts>

namespace sj::gfx {

class DeviceInfo;

template <typename T>
concept CDevice = requires(T& device, const DeviceInfo& info)
{
    device.Initialize(info);
    device.Finalize();
};

template <CDevice DeviceImpl>
class TDevice : private DeviceImpl
{
public:
    void Initialize(const DeviceInfo& info) noexcept { DeviceImpl::Initialize(info); }

    void Finalize() noexcept { DeviceImpl::Finalize(); }
};

}  // namespace sj::gfx

#endif
