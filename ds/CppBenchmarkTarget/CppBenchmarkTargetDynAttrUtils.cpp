/*----- PROTECTED REGION ID(CppBenchmarkTarget::DynAttrUtils.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        CppBenchmarkTargetDynAttrUtils.cpp
//
// description : Dynamic attributes utilities file for the CppBenchmarkTarget class
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


#include <CppBenchmarkTarget.h>
#include <CppBenchmarkTargetClass.h>

/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::DynAttrUtils.cpp

//================================================================
//  Attributes managed is:
//================================================================
//  BenchmarkDynamicSpectrumAttribute  |  Tango::DevDouble	Spectrum  ( max = 4096)
//================================================================

//	For compatibility reason, this file (CppBenchmarkTargetDynAttrUtils)
//	manage also the dynamic command utilities.
//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//================================================================

namespace CppBenchmarkTarget_ns
{
//=============================================================
//	Add/Remove dynamic attribute methods
//=============================================================

//--------------------------------------------------------
/**
 *	Add a BenchmarkDynamicSpectrumAttribute dynamic attribute.
 *
 *  parameter attname: attribute name to be cretated and added.
 *  parameter ptr:     memory buffer used to set attribute value.
 *                     If NULL or not specified, buffer will be allocated.
 */
//--------------------------------------------------------
void CppBenchmarkTarget::add_BenchmarkDynamicSpectrumAttribute_dynamic_attribute(string attname, Tango::DevDouble *ptr)
{
	//	Attribute : BenchmarkDynamicSpectrumAttribute
	if (ptr==NULL)
		ptr = new Tango::DevDouble[4096];
	BenchmarkDynamicSpectrumAttributeAttrib	*benchmarkdynamicspectrumattribute = new BenchmarkDynamicSpectrumAttributeAttrib(attname);
	Tango::UserDefaultAttrProp	benchmarkdynamicspectrumattribute_prop;
	benchmarkdynamicspectrumattribute_prop.set_description("dynamic spectrum attribute");
	//	label	not set for BenchmarkDynamicSpectrumAttribute
	//	unit	not set for BenchmarkDynamicSpectrumAttribute
	//	standard_unit	not set for BenchmarkDynamicSpectrumAttribute
	//	display_unit	not set for BenchmarkDynamicSpectrumAttribute
	//	format	not set for BenchmarkDynamicSpectrumAttribute
	//	max_value	not set for BenchmarkDynamicSpectrumAttribute
	//	min_value	not set for BenchmarkDynamicSpectrumAttribute
	//	max_alarm	not set for BenchmarkDynamicSpectrumAttribute
	//	min_alarm	not set for BenchmarkDynamicSpectrumAttribute
	//	max_warning	not set for BenchmarkDynamicSpectrumAttribute
	//	min_warning	not set for BenchmarkDynamicSpectrumAttribute
	//	delta_t	not set for BenchmarkDynamicSpectrumAttribute
	//	delta_val	not set for BenchmarkDynamicSpectrumAttribute
	
	/*----- PROTECTED REGION ID(CppBenchmarkTarget::att_BenchmarkDynamicSpectrumAttribute_dynamic_attribute) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::att_BenchmarkDynamicSpectrumAttribute_dynamic_attribute
	benchmarkdynamicspectrumattribute->set_default_properties(benchmarkdynamicspectrumattribute_prop);
	//	Not Polled
	benchmarkdynamicspectrumattribute->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	BenchmarkDynamicSpectrumAttribute_data.insert(make_pair(attname, ptr));
	add_attribute(benchmarkdynamicspectrumattribute);
}
//--------------------------------------------------------
/**
 *	remove a BenchmarkDynamicSpectrumAttribute dynamic attribute.
 *
 *  parameter attname: attribute name to be removed.
 *  parameter free_it: memory buffer will be freed if true or not specified.
 */
//--------------------------------------------------------
void CppBenchmarkTarget::remove_BenchmarkDynamicSpectrumAttribute_dynamic_attribute(string attname, bool free_it)
{
	remove_attribute(attname, true, Tango::Util::instance()->_UseDb);
	map<string,Tango::DevDouble *>::iterator ite;
    if ((ite=BenchmarkDynamicSpectrumAttribute_data.find(attname))!=BenchmarkDynamicSpectrumAttribute_data.end())
    {
    	/*----- PROTECTED REGION ID(CppBenchmarkTarget::remove_BenchmarkDynamicSpectrumAttribute_dynamic_attribute) ENABLED START -----*/
    	
    	/*----- PROTECTED REGION END -----*/	//	CppBenchmarkTarget::remove_BenchmarkDynamicSpectrumAttribute_dynamic_attribute
		if (free_it)
			delete[] ite->second;
		BenchmarkDynamicSpectrumAttribute_data.erase(ite);
	}
}


//============================================================
//	Tool methods to get pointer on attribute data buffer 
//============================================================
//--------------------------------------------------------
/**
 *	Return a pointer on BenchmarkDynamicSpectrumAttribute data.
 *
 *  parameter attname: the specified attribute name.
 */
//--------------------------------------------------------
Tango::DevDouble *CppBenchmarkTarget::get_BenchmarkDynamicSpectrumAttribute_data_ptr(string &name)
{
	map<string,Tango::DevDouble *>::iterator ite;
    if ((ite=BenchmarkDynamicSpectrumAttribute_data.find(name))==BenchmarkDynamicSpectrumAttribute_data.end())
    {
		TangoSys_OMemStream	tms;
		tms << "Dynamic attribute " << name << " has not been created";
		Tango::Except::throw_exception(
					(const char *)"ATTRIBUTE_NOT_FOUND",
					tms.str().c_str(),
					(const char *)"CppBenchmarkTarget::get_BenchmarkDynamicSpectrumAttribute_data_ptr()");
    }
	return  ite->second;
}


//=============================================================
//	Add/Remove dynamic command methods
//=============================================================


} //	namespace
