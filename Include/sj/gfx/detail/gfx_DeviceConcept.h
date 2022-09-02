#ifndef _SJ_GFX_DEVICECONCEPT_H_
#define _SJ_GFX_DEVICECONCEPT_H_

namespace sj::gfx {
class DeviceInfo;
}

namespace sj::gfx::detail {

template <typename T>
concept CDevice = requires(T& device, const DeviceInfo& info)
{
    device.Initialize(info);
    device.Finalize();
};

}  // namespace sj::gfx::detail

#endif
