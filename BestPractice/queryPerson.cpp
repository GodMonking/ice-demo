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

#include <queryPerson.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

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

namespace
{

const ::IceInternal::DefaultValueFactoryInit<::Demo::Person> iceC_Demo_Person_init("::Demo::Person");

const ::std::string iceC_Demo_CPersonI_ids[2] =
{
    "::Demo::CPersonI",
    "::Ice::Object"
};
const ::std::string iceC_Demo_CPersonI_ops[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "queryPersonById",
    "queryPersonByOpt"
};
const ::std::string iceC_Demo_CPersonI_queryPersonById_name = "queryPersonById";
const ::std::string iceC_Demo_CPersonI_queryPersonByOpt_name = "queryPersonByOpt";

}

bool
Demo::CPersonI::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Demo_CPersonI_ids, iceC_Demo_CPersonI_ids + 2, s);
}

::std::vector<::std::string>
Demo::CPersonI::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_Demo_CPersonI_ids[0], &iceC_Demo_CPersonI_ids[2]);
}

::std::string
Demo::CPersonI::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Demo::CPersonI::ice_staticId()
{
    static const ::std::string typeId = "::Demo::CPersonI";
    return typeId;
}

/// \cond INTERNAL
bool
Demo::CPersonI::_iceD_queryPersonById(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    int iceP_personId;
    istr->readAll(iceP_personId);
    inS.endReadParams();
    ::std::shared_ptr<Person> ret = this->queryPersonById(iceP_personId, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    ostr->writePendingValues();
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
Demo::CPersonI::_iceD_queryPersonByOpt(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    int iceP_personId;
    Ice::optional<::std::string> iceP_name;
    Ice::optional<int> iceP_age;
    istr->readAll(iceP_personId);
    istr->readAll({1, 2}, iceP_name, iceP_age);
    inS.endReadParams();
    ::std::shared_ptr<Person> ret = this->queryPersonByOpt(iceP_personId, ::std::move(iceP_name), iceP_age, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    ostr->writePendingValues();
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
Demo::CPersonI::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Demo_CPersonI_ops, iceC_Demo_CPersonI_ops + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Demo_CPersonI_ops)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_queryPersonById(in, current);
        }
        case 5:
        {
            return _iceD_queryPersonByOpt(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

Demo::Person::~Person()
{
}

const ::std::string&
Demo::Person::ice_staticId()
{
    static const ::std::string typeId = "::Demo::Person";
    return typeId;
}

/// \cond INTERNAL
void
Demo::CPersonIPrx::_iceI_queryPersonById(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<Person>>>& outAsync, int iceP_personId, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_Demo_CPersonI_queryPersonById_name);
    outAsync->invoke(iceC_Demo_CPersonI_queryPersonById_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_personId);
        },
        nullptr,
        [](::Ice::InputStream* istr)
        {
            ::std::shared_ptr<Person> ret;
            istr->readAll(ret);
            istr->readPendingValues();
            return ret;
        });
}
/// \endcond

/// \cond INTERNAL
void
Demo::CPersonIPrx::_iceI_queryPersonByOpt(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::shared_ptr<Person>>>& outAsync, int iceP_personId, const Ice::optional<::std::string>& iceP_name, const Ice::optional<int>& iceP_age, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_Demo_CPersonI_queryPersonByOpt_name);
    outAsync->invoke(iceC_Demo_CPersonI_queryPersonByOpt_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_personId);
            ostr->writeAll({1, 2}, iceP_name, iceP_age);
        },
        nullptr,
        [](::Ice::InputStream* istr)
        {
            ::std::shared_ptr<Person> ret;
            istr->readAll(ret);
            istr->readPendingValues();
            return ret;
        });
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
Demo::CPersonIPrx::_newInstance() const
{
    return ::IceInternal::createProxy<CPersonIPrx>();
}
/// \endcond

const ::std::string&
Demo::CPersonIPrx::ice_staticId()
{
    return CPersonI::ice_staticId();
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_Demo_CPersonI_queryPersonById_name = "queryPersonById";

const ::std::string iceC_Demo_CPersonI_queryPersonByOpt_name = "queryPersonByOpt";

}

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(Person* p) { return p; }

void
::IceProxy::Demo::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< Person>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new Person;
        v->_copyFrom(proxy);
    }
}
/// \endcond

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::Demo::Person::_newInstance() const
{
    return new Person;
}
/// \endcond

const ::std::string&
IceProxy::Demo::Person::ice_staticId()
{
    return ::Demo::Person::ice_staticId();
}

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(CPersonI* p) { return p; }

void
::IceProxy::Demo::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< CPersonI>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new CPersonI;
        v->_copyFrom(proxy);
    }
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::Demo::CPersonI::_iceI_begin_queryPersonById(::Ice::Int iceP_personId, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_Demo_CPersonI_queryPersonById_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Demo_CPersonI_queryPersonById_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Demo_CPersonI_queryPersonById_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_personId);
        result->endWriteParams();
        result->invoke(iceC_Demo_CPersonI_queryPersonById_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::Demo::PersonPtr
IceProxy::Demo::CPersonI::end_queryPersonById(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_Demo_CPersonI_queryPersonById_name);
    ::Demo::PersonPtr ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    istr->readPendingValues();
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::Demo::CPersonI::_iceI_begin_queryPersonByOpt(::Ice::Int iceP_personId, const IceUtil::Optional< ::std::string>& iceP_name, const IceUtil::Optional< ::Ice::Int>& iceP_age, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_Demo_CPersonI_queryPersonByOpt_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_Demo_CPersonI_queryPersonByOpt_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_Demo_CPersonI_queryPersonByOpt_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_personId);
        ostr->write(1, iceP_name);
        ostr->write(2, iceP_age);
        result->endWriteParams();
        result->invoke(iceC_Demo_CPersonI_queryPersonByOpt_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::Demo::PersonPtr
IceProxy::Demo::CPersonI::end_queryPersonByOpt(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_Demo_CPersonI_queryPersonByOpt_name);
    ::Demo::PersonPtr ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    istr->readPendingValues();
    result->_endReadParams();
    return ret;
}

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::Demo::CPersonI::_newInstance() const
{
    return new CPersonI;
}
/// \endcond

const ::std::string&
IceProxy::Demo::CPersonI::ice_staticId()
{
    return ::Demo::CPersonI::ice_staticId();
}

Demo::Person::~Person()
{
}

/// \cond INTERNAL
::Ice::Object* Demo::upCast(Person* p) { return p; }

/// \endcond
::Ice::ObjectPtr
Demo::Person::ice_clone() const
{
    ::Ice::Object* p = new Person(*this);
    return p;
}

namespace
{
const ::std::string iceC_Demo_Person_ids[2] =
{
    "::Demo::Person",
    "::Ice::Object"
};

}

bool
Demo::Person::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Demo_Person_ids, iceC_Demo_Person_ids + 2, s);
}

::std::vector< ::std::string>
Demo::Person::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_Demo_Person_ids[0], &iceC_Demo_Person_ids[2]);
}

const ::std::string&
Demo::Person::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Demo::Person::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Demo::Person";
    return typeId;
#else
    return iceC_Demo_Person_ids[0];
#endif
}

/// \cond STREAM
void
Demo::Person::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< Person, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
Demo::Person::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< Person, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

namespace
{
const ::IceInternal::DefaultValueFactoryInit< ::Demo::Person> iceC_Demo_Person_init("::Demo::Person");
}

::Ice::ValueFactoryPtr
Demo::Person::ice_factory()
{
    return ::IceInternal::factoryTable->getValueFactory(::Demo::Person::ice_staticId());
}

/// \cond INTERNAL
void
Demo::_icePatchObjectPtr(PersonPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = PersonPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(Person::ice_staticId(), v);
    }
}
/// \endcond

Demo::CPersonI::~CPersonI()
{
}

/// \cond INTERNAL
::Ice::Object* Demo::upCast(CPersonI* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_Demo_CPersonI_ids[2] =
{
    "::Demo::CPersonI",
    "::Ice::Object"
};

}

bool
Demo::CPersonI::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_Demo_CPersonI_ids, iceC_Demo_CPersonI_ids + 2, s);
}

::std::vector< ::std::string>
Demo::CPersonI::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_Demo_CPersonI_ids[0], &iceC_Demo_CPersonI_ids[2]);
}

const ::std::string&
Demo::CPersonI::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
Demo::CPersonI::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Demo::CPersonI";
    return typeId;
#else
    return iceC_Demo_CPersonI_ids[0];
#endif
}

/// \cond INTERNAL
bool
Demo::CPersonI::_iceD_queryPersonById(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Ice::Int iceP_personId;
    istr->read(iceP_personId);
    inS.endReadParams();
    PersonPtr ret = this->queryPersonById(iceP_personId, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    ostr->writePendingValues();
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
Demo::CPersonI::_iceD_queryPersonByOpt(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Ice::Int iceP_personId;
    IceUtil::Optional< ::std::string> iceP_name;
    IceUtil::Optional< ::Ice::Int> iceP_age;
    istr->read(iceP_personId);
    istr->read(1, iceP_name);
    istr->read(2, iceP_age);
    inS.endReadParams();
    PersonPtr ret = this->queryPersonByOpt(iceP_personId, iceP_name, iceP_age, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    ostr->writePendingValues();
    inS.endWriteParams();
    return true;
}
/// \endcond

namespace
{
const ::std::string iceC_Demo_CPersonI_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "queryPersonById",
    "queryPersonByOpt"
};

}

/// \cond INTERNAL
bool
Demo::CPersonI::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_Demo_CPersonI_all, iceC_Demo_CPersonI_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_Demo_CPersonI_all)
    {
        case 0:
        {
            return _iceD_ice_id(in, current);
        }
        case 1:
        {
            return _iceD_ice_ids(in, current);
        }
        case 2:
        {
            return _iceD_ice_isA(in, current);
        }
        case 3:
        {
            return _iceD_ice_ping(in, current);
        }
        case 4:
        {
            return _iceD_queryPersonById(in, current);
        }
        case 5:
        {
            return _iceD_queryPersonByOpt(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond STREAM
void
Demo::CPersonI::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< CPersonI, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
Demo::CPersonI::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< CPersonI, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
Demo::_icePatchObjectPtr(CPersonIPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = CPersonIPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(CPersonI::ice_staticId(), v);
    }
}
/// \endcond

namespace Ice
{
}

#endif
