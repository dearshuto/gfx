#ifndef gfx_QueueConcept_h
#define gfx_QueueConcept_h

namespace sj::gfx {
class QueueInfo;
}

namespace sj::gfx::detail {

template <typename T>
concept CQueue = requires(T& queue, typename T::DeviceType* pDevice, const sj::gfx::QueueInfo& info)
{
    typename T::DeviceType;
    queue.Initialize(pDevice, info);
    queue.Finalize(pDevice);
};

};  // namespace sj::gfx::detail

#endif /* gfx_QueueConcept_h */
