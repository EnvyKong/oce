// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_EvaluatedDegeneratePcurve_HeaderFile
#define _StepGeom_EvaluatedDegeneratePcurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_EvaluatedDegeneratePcurve.hxx>

#include <Handle_StepGeom_CartesianPoint.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepGeom_Surface.hxx>
#include <Handle_StepRepr_DefinitionalRepresentation.hxx>
class StepGeom_CartesianPoint;
class TCollection_HAsciiString;
class StepGeom_Surface;
class StepRepr_DefinitionalRepresentation;



class StepGeom_EvaluatedDegeneratePcurve : public StepGeom_DegeneratePcurve
{

public:

  
  //! Returns a EvaluatedDegeneratePcurve
  Standard_EXPORT StepGeom_EvaluatedDegeneratePcurve();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Surface)& aBasisSurface, const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Surface)& aBasisSurface, const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve, const Handle(StepGeom_CartesianPoint)& aEquivalentPoint) ;
  
  Standard_EXPORT   void SetEquivalentPoint (const Handle(StepGeom_CartesianPoint)& aEquivalentPoint) ;
  
  Standard_EXPORT   Handle(StepGeom_CartesianPoint) EquivalentPoint()  const;




  DEFINE_STANDARD_RTTI(StepGeom_EvaluatedDegeneratePcurve)

protected:




private: 


  Handle(StepGeom_CartesianPoint) equivalentPoint;


};







#endif // _StepGeom_EvaluatedDegeneratePcurve_HeaderFile
