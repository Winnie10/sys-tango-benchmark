/*----- PROTECTED REGION ID(CppBenchmarkTargetClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        CppBenchmarkTargetClass.h
//
// description : Include for the CppBenchmarkTarget root class.
//               This class is the singleton class for
//                the CppBenchmarkTarget device class.
//               It contains all properties and methods which the 
//               CppBenchmarkTarget requires only once e.g. the commands.
//
// project :     Benchmark device
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef CppBenchmarkTargetClass_H
#define CppBenchmarkTargetClass_H

#include <tango.h>
#include <CppBenchmarkTarget.h>


/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTargetClass.h


namespace CppBenchmarkTarget_ns
{
/*----- PROTECTED REGION ID(CppBenchmarkTargetClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTargetClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute BenchmarkScalarAttribute class definition
class BenchmarkScalarAttributeAttrib: public Tango::Attr
{
public:
	BenchmarkScalarAttributeAttrib():Attr("BenchmarkScalarAttribute",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~BenchmarkScalarAttributeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_BenchmarkScalarAttribute(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->write_BenchmarkScalarAttribute(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_BenchmarkScalarAttribute_allowed(ty);}
};

//	Attribute AlwaysExecutedHookCount class definition
class AlwaysExecutedHookCountAttrib: public Tango::Attr
{
public:
	AlwaysExecutedHookCountAttrib():Attr("AlwaysExecutedHookCount",
			Tango::DEV_LONG, Tango::READ) {};
	~AlwaysExecutedHookCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_AlwaysExecutedHookCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_AlwaysExecutedHookCount_allowed(ty);}
};

//	Attribute ReadAttributeHardwareCount class definition
class ReadAttributeHardwareCountAttrib: public Tango::Attr
{
public:
	ReadAttributeHardwareCountAttrib():Attr("ReadAttributeHardwareCount",
			Tango::DEV_LONG, Tango::READ) {};
	~ReadAttributeHardwareCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_ReadAttributeHardwareCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_ReadAttributeHardwareCount_allowed(ty);}
};

//	Attribute WriteAttributeCounterCount class definition
class WriteAttributeCounterCountAttrib: public Tango::Attr
{
public:
	WriteAttributeCounterCountAttrib():Attr("WriteAttributeCounterCount",
			Tango::DEV_LONG, Tango::READ) {};
	~WriteAttributeCounterCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_WriteAttributeCounterCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_WriteAttributeCounterCount_allowed(ty);}
};

//	Attribute ScalarReadsCount class definition
class ScalarReadsCountAttrib: public Tango::Attr
{
public:
	ScalarReadsCountAttrib():Attr("ScalarReadsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~ScalarReadsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_ScalarReadsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_ScalarReadsCount_allowed(ty);}
};

//	Attribute SpectrumReadsCount class definition
class SpectrumReadsCountAttrib: public Tango::Attr
{
public:
	SpectrumReadsCountAttrib():Attr("SpectrumReadsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~SpectrumReadsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_SpectrumReadsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_SpectrumReadsCount_allowed(ty);}
};

//	Attribute ImageReadsCount class definition
class ImageReadsCountAttrib: public Tango::Attr
{
public:
	ImageReadsCountAttrib():Attr("ImageReadsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~ImageReadsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_ImageReadsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_ImageReadsCount_allowed(ty);}
};

//	Attribute ScalarWritesCount class definition
class ScalarWritesCountAttrib: public Tango::Attr
{
public:
	ScalarWritesCountAttrib():Attr("ScalarWritesCount",
			Tango::DEV_LONG, Tango::READ) {};
	~ScalarWritesCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_ScalarWritesCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_ScalarWritesCount_allowed(ty);}
};

//	Attribute SpectrumWritesCount class definition
class SpectrumWritesCountAttrib: public Tango::Attr
{
public:
	SpectrumWritesCountAttrib():Attr("SpectrumWritesCount",
			Tango::DEV_LONG, Tango::READ) {};
	~SpectrumWritesCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_SpectrumWritesCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_SpectrumWritesCount_allowed(ty);}
};

//	Attribute ImageWritesCount class definition
class ImageWritesCountAttrib: public Tango::Attr
{
public:
	ImageWritesCountAttrib():Attr("ImageWritesCount",
			Tango::DEV_LONG, Tango::READ) {};
	~ImageWritesCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_ImageWritesCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_ImageWritesCount_allowed(ty);}
};

//	Attribute CommandCallsCount class definition
class CommandCallsCountAttrib: public Tango::Attr
{
public:
	CommandCallsCountAttrib():Attr("CommandCallsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~CommandCallsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_CommandCallsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_CommandCallsCount_allowed(ty);}
};

//	Attribute TimeSinceReset class definition
class TimeSinceResetAttrib: public Tango::Attr
{
public:
	TimeSinceResetAttrib():Attr("TimeSinceReset",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~TimeSinceResetAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_TimeSinceReset(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_TimeSinceReset_allowed(ty);}
};

//	Attribute PipeReadsCount class definition
class PipeReadsCountAttrib: public Tango::Attr
{
public:
	PipeReadsCountAttrib():Attr("PipeReadsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~PipeReadsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_PipeReadsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_PipeReadsCount_allowed(ty);}
};

//	Attribute PipeWritesCount class definition
class PipeWritesCountAttrib: public Tango::Attr
{
public:
	PipeWritesCountAttrib():Attr("PipeWritesCount",
			Tango::DEV_LONG, Tango::READ) {};
	~PipeWritesCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_PipeWritesCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_PipeWritesCount_allowed(ty);}
};

//	Attribute EventSleepPeriod class definition
class EventSleepPeriodAttrib: public Tango::Attr
{
public:
	EventSleepPeriodAttrib():Attr("EventSleepPeriod",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~EventSleepPeriodAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_EventSleepPeriod(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->write_EventSleepPeriod(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_EventSleepPeriod_allowed(ty);}
};

//	Attribute EventsCount class definition
class EventsCountAttrib: public Tango::Attr
{
public:
	EventsCountAttrib():Attr("EventsCount",
			Tango::DEV_LONG, Tango::READ) {};
	~EventsCountAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_EventsCount(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_EventsCount_allowed(ty);}
};

//	Attribute BenchmarkSpectrumAttribute class definition
class BenchmarkSpectrumAttributeAttrib: public Tango::SpectrumAttr
{
public:
	BenchmarkSpectrumAttributeAttrib():SpectrumAttr("BenchmarkSpectrumAttribute",
			Tango::DEV_DOUBLE, Tango::READ_WRITE, 4096) {};
	~BenchmarkSpectrumAttributeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_BenchmarkSpectrumAttribute(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->write_BenchmarkSpectrumAttribute(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_BenchmarkSpectrumAttribute_allowed(ty);}
};

//	Attribute BenchmarkImageAttribute class definition
class BenchmarkImageAttributeAttrib: public Tango::ImageAttr
{
public:
	BenchmarkImageAttributeAttrib():ImageAttr("BenchmarkImageAttribute",
			Tango::DEV_DOUBLE, Tango::READ_WRITE, 4096, 4096) {};
	~BenchmarkImageAttributeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_BenchmarkImageAttribute(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<CppBenchmarkTarget *>(dev))->write_BenchmarkImageAttribute(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_BenchmarkImageAttribute_allowed(ty);}
};


//=========================================
//	Define classes for pipes
//=========================================
//	Pipe BenchmarkPipe class definition
class BenchmarkPipeClass: public Tango::WPipe
{
public:
	BenchmarkPipeClass(const string &name, Tango::DispLevel level)
		:WPipe(name, level) {};

	~BenchmarkPipeClass() {};

	virtual bool is_allowed (Tango::DeviceImpl *dev,Tango::PipeReqType _prt)
		{return (static_cast<CppBenchmarkTarget *>(dev))->is_BenchmarkPipe_allowed(_prt);}
	virtual void read(Tango::DeviceImpl *dev)
		{(static_cast<CppBenchmarkTarget *>(dev))->read_BenchmarkPipe(*this);}
	virtual void write(Tango::DeviceImpl *dev)
		{(static_cast<CppBenchmarkTarget *>(dev))->write_BenchmarkPipe(*this);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command BenchmarkCommand class definition
class BenchmarkCommandClass : public Tango::Command
{
public:
	BenchmarkCommandClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	BenchmarkCommandClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~BenchmarkCommandClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_BenchmarkCommand_allowed(any);}
};

//	Command SetSpectrumSize class definition
class SetSpectrumSizeClass : public Tango::Command
{
public:
	SetSpectrumSizeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetSpectrumSizeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetSpectrumSizeClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_SetSpectrumSize_allowed(any);}
};

//	Command SetImageSize class definition
class SetImageSizeClass : public Tango::Command
{
public:
	SetImageSizeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetImageSizeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetImageSizeClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_SetImageSize_allowed(any);}
};

//	Command ResetCounters class definition
class ResetCountersClass : public Tango::Command
{
public:
	ResetCountersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetCountersClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetCountersClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_ResetCounters_allowed(any);}
};

//	Command StartEvents class definition
class StartEventsClass : public Tango::Command
{
public:
	StartEventsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartEventsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartEventsClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_StartEvents_allowed(any);}
};

//	Command StopEvents class definition
class StopEventsClass : public Tango::Command
{
public:
	StopEventsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopEventsClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopEventsClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_StopEvents_allowed(any);}
};

//	Command PushEvent class definition
class PushEventClass : public Tango::Command
{
public:
	PushEventClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	PushEventClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~PushEventClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<CppBenchmarkTarget *>(dev))->is_PushEvent_allowed(any);}
};


/**
 *	The CppBenchmarkTargetClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  CppBenchmarkTargetClass : public Tango::DeviceClass
#else
class CppBenchmarkTargetClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(CppBenchmarkTargetClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTargetClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static CppBenchmarkTargetClass *init(const char *);
		static CppBenchmarkTargetClass *instance();
		~CppBenchmarkTargetClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		CppBenchmarkTargetClass(string &);
		static CppBenchmarkTargetClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	CppBenchmarkTarget_H
