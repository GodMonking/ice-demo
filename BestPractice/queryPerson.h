//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.2
//
// <auto-generated>
//
// Generated from file `queryPerson.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __queryPerson_h__
#define __queryPerson_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace Demo
{

class Person;
class CPersonI;
class CPersonIPrx;

}

namespace Demo
{

class CPersonI : public virtual ::Ice::Object
{
public:

    using ProxyType = CPersonIPrx;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(::std::string id, const ::Ice::Current& current) const override;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current& current) const override;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual ::std::string ice_id(const ::Ice::Current& current) const override;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual ::std::shared_ptr<Person> queryPersonById(int personId, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_queryPersonById(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual ::std::shared_ptr<Person> queryPersonByOpt(int personId, Ice::optional<::std::string> name, Ice::optional<int> age, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_queryPersonByOpt(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace Demo
{

class Person : public ::Ice::ValueHelper<Person, ::Ice::Value>
{
public:

    virtual ~Person();

    Person() = default;

    Person(const Person&) = default;
    Person(Person&&) = default;
    Person& operator=(const Person&) = default;
    Person& operator=(Person&&) = default;

    /**
     * One-shot constructor to initialize all data members.
     */
    Person(const ::std::string& firstName, const ::std::string& lastName, const Ice::optional<::std::string>& birthDate, const Ice::optional<int>& age) :
        firstName(::std::move(firstName)),
        lastName(::std::move(lastName)),
        birthDate(::std::move(birthDate)),
        age(age)
    {
    }

    /**
     * Obtains a tuple containing all of the value's data members.
     * @return The data members in a tuple.
     */

    std::tuple<const ::std::string&, const ::std::string&, const Ice::optional<::std::string>&, const Ice::optional<int>&> ice_tuple() const
    {
        return std::tie(firstName, lastName, birthDate, age);
    }

    /**
     * Obtains the Slice type ID of this value.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    ::std::string firstName;
    ::std::string lastName;
    Ice::optional<::std::string> birthDate;
    Ice::optional<int> age;
};

/// \cond INTERNAL
static Person _iceS_Person_init;
/// \endcond

}

namespace Demo
{

class CPersonIPrx : public virtual ::Ice::Proxy<CPersonIPrx, ::Ice::ObjectPrx>
{
public:

    ::std::shared_ptr<Person> queryPersonById(int personId, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<Person>>(true, this, &CPersonIPrx::_iceI_queryPersonById, personId, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto queryPersonByIdAsync(int personId, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<Person>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<Person>, P>(false, this, &CPersonIPrx::_iceI_queryPersonById, personId, context);
    }

    ::std::function<void()>
    queryPersonByIdAsync(int personId,
                         ::std::function<void(::std::shared_ptr<Person>)> response,
                         ::std::function<void(::std::exception_ptr)> ex = nullptr,
                         ::std::function<void(bool)> sent = nullptr,
                         const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<Person>>(response, ex, sent, this, &Demo::CPersonIPrx::_iceI_queryPersonById, personId, context);
    }

    /// \cond INTERNAL
    void _iceI_queryPersonById(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<Person>>>&, int, const ::Ice::Context&);
    /// \endcond

    ::std::shared_ptr<Person> queryPersonByOpt(int personId, const Ice::optional<::std::string>& name, const Ice::optional<int>& age, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::shared_ptr<Person>>(true, this, &CPersonIPrx::_iceI_queryPersonByOpt, personId, name, age, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto queryPersonByOptAsync(int personId, const Ice::optional<::std::string>& name, const Ice::optional<int>& age, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::shared_ptr<Person>>>().get_future())
    {
        return _makePromiseOutgoing<::std::shared_ptr<Person>, P>(false, this, &CPersonIPrx::_iceI_queryPersonByOpt, personId, name, age, context);
    }

    ::std::function<void()>
    queryPersonByOptAsync(int personId, const Ice::optional<::std::string>& name, const Ice::optional<int>& age,
                          ::std::function<void(::std::shared_ptr<Person>)> response,
                          ::std::function<void(::std::exception_ptr)> ex = nullptr,
                          ::std::function<void(bool)> sent = nullptr,
                          const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::shared_ptr<Person>>(response, ex, sent, this, &Demo::CPersonIPrx::_iceI_queryPersonByOpt, personId, name, age, context);
    }

    /// \cond INTERNAL
    void _iceI_queryPersonByOpt(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<Person>>>&, int, const Ice::optional<::std::string>&, const Ice::optional<int>&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    CPersonIPrx() = default;
    friend ::std::shared_ptr<CPersonIPrx> IceInternal::createProxy<CPersonIPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter<::Demo::Person, S>
{
    static void write(S* ostr, const ::Demo::Person& v)
    {
        ostr->writeAll(v.firstName, v.lastName);
        ostr->writeAll({1, 2}, v.birthDate, v.age);
    }
};

template<typename S>
struct StreamReader<::Demo::Person, S>
{
    static void read(S* istr, ::Demo::Person& v)
    {
        istr->readAll(v.firstName, v.lastName);
        istr->readAll({1, 2}, v.birthDate, v.age);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace Demo
{

using PersonPtr = ::std::shared_ptr<Person>;

using CPersonIPtr = ::std::shared_ptr<CPersonI>;
using CPersonIPrxPtr = ::std::shared_ptr<CPersonIPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace Demo
{

class Person;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< Person>&);
::IceProxy::Ice::Object* upCast(Person*);
/// \endcond

class CPersonI;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< CPersonI>&);
::IceProxy::Ice::Object* upCast(CPersonI*);
/// \endcond

}

}

namespace Demo
{

class Person;
/// \cond INTERNAL
::Ice::Object* upCast(Person*);
/// \endcond
typedef ::IceInternal::Handle< Person> PersonPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Person> PersonPrx;
typedef PersonPrx PersonPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(PersonPtr&, const ::Ice::ObjectPtr&);
/// \endcond

class CPersonI;
/// \cond INTERNAL
::Ice::Object* upCast(CPersonI*);
/// \endcond
typedef ::IceInternal::Handle< CPersonI> CPersonIPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::CPersonI> CPersonIPrx;
typedef CPersonIPrx CPersonIPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(CPersonIPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace Demo
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonById.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonById.
 */
class Callback_CPersonI_queryPersonById_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CPersonI_queryPersonById_Base> Callback_CPersonI_queryPersonByIdPtr;

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonByOpt.
 */
class Callback_CPersonI_queryPersonByOpt_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CPersonI_queryPersonByOpt_Base> Callback_CPersonI_queryPersonByOptPtr;

}

namespace IceProxy
{

namespace Demo
{

class Person : public virtual ::Ice::Proxy<Person, ::IceProxy::Ice::Object>
{
public:

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

class CPersonI : public virtual ::Ice::Proxy<CPersonI, ::IceProxy::Ice::Object>
{
public:

    ::Demo::PersonPtr queryPersonById(::Ice::Int personId, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_queryPersonById(_iceI_begin_queryPersonById(personId, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_queryPersonById(::Ice::Int personId, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_queryPersonById(personId, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_queryPersonById(::Ice::Int personId, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonById(personId, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonById(::Ice::Int personId, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonById(personId, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonById(::Ice::Int personId, const ::Demo::Callback_CPersonI_queryPersonByIdPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonById(personId, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonById(::Ice::Int personId, const ::Ice::Context& context, const ::Demo::Callback_CPersonI_queryPersonByIdPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonById(personId, context, cb, cookie);
    }

    ::Demo::PersonPtr end_queryPersonById(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_queryPersonById(::Ice::Int, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    ::Demo::PersonPtr queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_queryPersonByOpt(_iceI_begin_queryPersonByOpt(personId, name, age, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_queryPersonByOpt(personId, name, age, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonByOpt(personId, name, age, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonByOpt(personId, name, age, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Demo::Callback_CPersonI_queryPersonByOptPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonByOpt(personId, name, age, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::Context& context, const ::Demo::Callback_CPersonI_queryPersonByOptPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_queryPersonByOpt(personId, name, age, context, cb, cookie);
    }

    ::Demo::PersonPtr end_queryPersonByOpt(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_queryPersonByOpt(::Ice::Int, const IceUtil::Optional< ::std::string>&, const IceUtil::Optional< ::Ice::Int>&, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    /**
     * Obtains the Slice type ID corresponding to this interface.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

}

}

namespace Demo
{

class Person : public virtual ::Ice::Object
{
public:

    typedef PersonPrx ProxyType;
    typedef PersonPtr PointerType;

    virtual ~Person();

    Person()
    {
    }

    /**
     * One-shot constructor to initialize all data members.
     */
    Person(const ::std::string& firstName, const ::std::string& lastName, const IceUtil::Optional< ::std::string>& birthDate, const IceUtil::Optional< ::Ice::Int>& age) :
        firstName(firstName),
        lastName(lastName),
        birthDate(birthDate),
        age(age)
    {
    }

    /**
     * Polymporphically clones this object.
     * @return A shallow copy of this object.
     */
    virtual ::Ice::ObjectPtr ice_clone() const;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    /**
     * Obtains a value factory that instantiates this class.
     * @return The value factory.
     */
    static ::Ice::ValueFactoryPtr ice_factory();

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond

public:

    ::std::string firstName;
    ::std::string lastName;
    IceUtil::Optional< ::std::string> birthDate;
    IceUtil::Optional< ::Ice::Int> age;
};
/// \cond INTERNAL
static ::Ice::ValueFactoryPtr _iceS_Person_init = ::Demo::Person::ice_factory();
/// \endcond

/// \cond INTERNAL
inline bool operator==(const Person& lhs, const Person& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const Person& lhs, const Person& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

class CPersonI : public virtual ::Ice::Object
{
public:

    typedef CPersonIPrx ProxyType;
    typedef CPersonIPtr PointerType;

    virtual ~CPersonI();

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual PersonPtr queryPersonById(::Ice::Int personId, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_queryPersonById(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual PersonPtr queryPersonByOpt(::Ice::Int personId, const IceUtil::Optional< ::std::string>& name, const IceUtil::Optional< ::Ice::Int>& age, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_queryPersonByOpt(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
inline bool operator==(const CPersonI& lhs, const CPersonI& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const CPersonI& lhs, const CPersonI& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<typename S>
struct StreamWriter< ::Demo::Person, S>
{
    static void write(S* ostr, const ::Demo::Person& v)
    {
        ostr->write(v.firstName);
        ostr->write(v.lastName);
        ostr->write(1, v.birthDate);
        ostr->write(2, v.age);
    }
};

template<typename S>
struct StreamReader< ::Demo::Person, S>
{
    static void read(S* istr, ::Demo::Person& v)
    {
        istr->read(v.firstName);
        istr->read(v.lastName);
        istr->read(1, v.birthDate);
        istr->read(2, v.age);
    }
};

}
/// \endcond

namespace Demo
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonById.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonById.
 */
template<class T>
class CallbackNC_CPersonI_queryPersonById : public Callback_CPersonI_queryPersonById_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const PersonPtr&);

    CallbackNC_CPersonI_queryPersonById(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        CPersonIPrx proxy = CPersonIPrx::uncheckedCast(result->getProxy());
        PersonPtr ret;
        try
        {
            ret = proxy->end_queryPersonById(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(ret);
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonById.
 */
template<class T> Callback_CPersonI_queryPersonByIdPtr
newCallback_CPersonI_queryPersonById(const IceUtil::Handle<T>& instance, void (T::*cb)(const PersonPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CPersonI_queryPersonById<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonById.
 */
template<class T> Callback_CPersonI_queryPersonByIdPtr
newCallback_CPersonI_queryPersonById(T* instance, void (T::*cb)(const PersonPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CPersonI_queryPersonById<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonById.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonById.
 */
template<class T, typename CT>
class Callback_CPersonI_queryPersonById : public Callback_CPersonI_queryPersonById_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const PersonPtr&, const CT&);

    Callback_CPersonI_queryPersonById(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        CPersonIPrx proxy = CPersonIPrx::uncheckedCast(result->getProxy());
        PersonPtr ret;
        try
        {
            ret = proxy->end_queryPersonById(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(ret, CT::dynamicCast(result->getCookie()));
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonById.
 */
template<class T, typename CT> Callback_CPersonI_queryPersonByIdPtr
newCallback_CPersonI_queryPersonById(const IceUtil::Handle<T>& instance, void (T::*cb)(const PersonPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CPersonI_queryPersonById<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonById.
 */
template<class T, typename CT> Callback_CPersonI_queryPersonByIdPtr
newCallback_CPersonI_queryPersonById(T* instance, void (T::*cb)(const PersonPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CPersonI_queryPersonById<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonByOpt.
 */
template<class T>
class CallbackNC_CPersonI_queryPersonByOpt : public Callback_CPersonI_queryPersonByOpt_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const PersonPtr&);

    CallbackNC_CPersonI_queryPersonByOpt(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        CPersonIPrx proxy = CPersonIPrx::uncheckedCast(result->getProxy());
        PersonPtr ret;
        try
        {
            ret = proxy->end_queryPersonByOpt(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(ret);
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 */
template<class T> Callback_CPersonI_queryPersonByOptPtr
newCallback_CPersonI_queryPersonByOpt(const IceUtil::Handle<T>& instance, void (T::*cb)(const PersonPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CPersonI_queryPersonByOpt<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 */
template<class T> Callback_CPersonI_queryPersonByOptPtr
newCallback_CPersonI_queryPersonByOpt(T* instance, void (T::*cb)(const PersonPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CPersonI_queryPersonByOpt<T>(instance, cb, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 * Create a wrapper instance by calling ::Demo::newCallback_CPersonI_queryPersonByOpt.
 */
template<class T, typename CT>
class Callback_CPersonI_queryPersonByOpt : public Callback_CPersonI_queryPersonByOpt_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const PersonPtr&, const CT&);

    Callback_CPersonI_queryPersonByOpt(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    /// \cond INTERNAL
    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        CPersonIPrx proxy = CPersonIPrx::uncheckedCast(result->getProxy());
        PersonPtr ret;
        try
        {
            ret = proxy->end_queryPersonByOpt(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(ret, CT::dynamicCast(result->getCookie()));
        }
    }
    /// \endcond

private:

    Response _response;
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 */
template<class T, typename CT> Callback_CPersonI_queryPersonByOptPtr
newCallback_CPersonI_queryPersonByOpt(const IceUtil::Handle<T>& instance, void (T::*cb)(const PersonPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CPersonI_queryPersonByOpt<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::Demo::CPersonI::begin_queryPersonByOpt.
 */
template<class T, typename CT> Callback_CPersonI_queryPersonByOptPtr
newCallback_CPersonI_queryPersonByOpt(T* instance, void (T::*cb)(const PersonPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CPersonI_queryPersonByOpt<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
