// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_WeekOfYearAndDayDate_HeaderFile
#define _StepBasic_WeekOfYearAndDayDate_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_WeekOfYearAndDayDate_HeaderFile
#include <Handle_StepBasic_WeekOfYearAndDayDate.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepBasic_Date_HeaderFile
#include <StepBasic_Date.hxx>
#endif



class StepBasic_WeekOfYearAndDayDate : public StepBasic_Date {

public:

  //! Returns a WeekOfYearAndDayDate <br>
  Standard_EXPORT   StepBasic_WeekOfYearAndDayDate();
  
  Standard_EXPORT   virtual  void Init(const Standard_Integer aYearComponent) ;
  
  Standard_EXPORT   virtual  void Init(const Standard_Integer aYearComponent,const Standard_Integer aWeekComponent,const Standard_Boolean hasAdayComponent,const Standard_Integer aDayComponent) ;
  
  Standard_EXPORT     void SetWeekComponent(const Standard_Integer aWeekComponent) ;
  
  Standard_EXPORT     Standard_Integer WeekComponent() const;
  
  Standard_EXPORT     void SetDayComponent(const Standard_Integer aDayComponent) ;
  
  Standard_EXPORT     void UnSetDayComponent() ;
  
  Standard_EXPORT     Standard_Integer DayComponent() const;
  
  Standard_EXPORT     Standard_Boolean HasDayComponent() const;




  DEFINE_STANDARD_RTTI(StepBasic_WeekOfYearAndDayDate)

protected:




private: 


Standard_Integer weekComponent;
Standard_Integer dayComponent;
Standard_Boolean hasDayComponent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif