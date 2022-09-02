#ifndef gfx_Queue_h
#define gfx_Queue_h

#include <sj/gfx/detail/gfx_QueueConcept.h>

namespace sj::gfx {

template <detail::CQueue QueueImpl>
class TQueue
{
public:
    void Initialize(typename QueueImpl::DeviceType* pDevice, const QueueInfo& info) noexcept
    {
        m_Impl.Initialize(pDevice, info);
    }

    void Finalize(typename QueueImpl::DeviceType* pDevice) noexcept { m_Impl.Finalize(pDevice); }

private:
    QueueImpl m_Impl;
};

}  // namespace sj::gfx

#endif /* gfx_Queue_h */
