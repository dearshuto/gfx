#ifndef gfx_DeviceTemplate_h
#define gfx_DeviceTemplate_h

#include <sj/gfx/detail/gfx_DeviceConcept.h>

namespace sj::gfx {
class DeviceInfo;

template <detail::CDevice DeviceImpl>
class TDevice
{
public:
    void Initialize(const DeviceInfo& info) noexcept { m_Impl.Initialize(info); }

    void Finalize() noexcept { m_Impl.Finalize(); }

private:
    DeviceImpl m_Impl;
};

}  // namespace sj::gfx

#endif /* gfx_DeviceTemplate_h */
