// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_StartRequest_HeaderFile
#define _StepAP203_StartRequest_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP203_StartRequest_HeaderFile
#include <Handle_StepAP203_StartRequest.hxx>
#endif

#ifndef _Handle_StepAP203_HArray1OfStartRequestItem_HeaderFile
#include <Handle_StepAP203_HArray1OfStartRequestItem.hxx>
#endif
#ifndef _StepBasic_ActionRequestAssignment_HeaderFile
#include <StepBasic_ActionRequestAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_VersionedActionRequest_HeaderFile
#include <Handle_StepBasic_VersionedActionRequest.hxx>
#endif
class StepAP203_HArray1OfStartRequestItem;
class StepBasic_VersionedActionRequest;


//! Representation of STEP entity StartRequest <br>
class StepAP203_StartRequest : public StepBasic_ActionRequestAssignment {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepAP203_StartRequest();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_VersionedActionRequest)& aActionRequestAssignment_AssignedActionRequest,const Handle(StepAP203_HArray1OfStartRequestItem)& aItems) ;
  //! Returns field Items <br>
  Standard_EXPORT     Handle_StepAP203_HArray1OfStartRequestItem Items() const;
  //! Set field Items <br>
  Standard_EXPORT     void SetItems(const Handle(StepAP203_HArray1OfStartRequestItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_StartRequest)

protected:




private: 


Handle_StepAP203_HArray1OfStartRequestItem theItems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif