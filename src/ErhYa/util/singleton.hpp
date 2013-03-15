#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

template <typename T>
struct singleton_default {
  protected:
    struct object_creator {
      object_creator() { singleton_default<T>::instance(); }
      inline void do_nothing() const { }
    };
    static object_creator create_object;
  protected:
    singleton_default();
  public:
    typedef T object_type;

    static object_type & instance() {
      static object_type obj;
      create_object.do_nothing();
      return obj;
    }
};

template <typename T>
typename singleton_default<T>::object_creator
singleton_default<T>::create_object;

#endif
