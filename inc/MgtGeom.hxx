// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MgtGeom_HeaderFile
#define _MgtGeom_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Axis1Placement.hxx>
#include <Handle_PGeom_Axis1Placement.hxx>
#include <Handle_Geom_Axis2Placement.hxx>
#include <Handle_PGeom_Axis2Placement.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Handle_PGeom_BSplineCurve.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Handle_PGeom_BSplineSurface.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_PGeom_BezierCurve.hxx>
#include <Handle_Geom_BezierSurface.hxx>
#include <Handle_PGeom_BezierSurface.hxx>
#include <Handle_Geom_CartesianPoint.hxx>
#include <Handle_PGeom_CartesianPoint.hxx>
#include <Handle_Geom_Circle.hxx>
#include <Handle_PGeom_Circle.hxx>
#include <Handle_Geom_ConicalSurface.hxx>
#include <Handle_PGeom_ConicalSurface.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_PGeom_Curve.hxx>
#include <Handle_Geom_CylindricalSurface.hxx>
#include <Handle_PGeom_CylindricalSurface.hxx>
#include <Handle_Geom_Direction.hxx>
#include <Handle_PGeom_Direction.hxx>
#include <Handle_Geom_Ellipse.hxx>
#include <Handle_PGeom_Ellipse.hxx>
#include <Handle_Geom_Hyperbola.hxx>
#include <Handle_PGeom_Hyperbola.hxx>
#include <Handle_Geom_Line.hxx>
#include <Handle_PGeom_Line.hxx>
#include <Handle_Geom_OffsetCurve.hxx>
#include <Handle_PGeom_OffsetCurve.hxx>
#include <Handle_Geom_OffsetSurface.hxx>
#include <Handle_PGeom_OffsetSurface.hxx>
#include <Handle_Geom_Parabola.hxx>
#include <Handle_PGeom_Parabola.hxx>
#include <Handle_Geom_Plane.hxx>
#include <Handle_PGeom_Plane.hxx>
#include <Handle_Geom_Point.hxx>
#include <Handle_PGeom_Point.hxx>
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
#include <Handle_PGeom_RectangularTrimmedSurface.hxx>
#include <Handle_Geom_SphericalSurface.hxx>
#include <Handle_PGeom_SphericalSurface.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_PGeom_Surface.hxx>
#include <Handle_Geom_SurfaceOfLinearExtrusion.hxx>
#include <Handle_PGeom_SurfaceOfLinearExtrusion.hxx>
#include <Handle_Geom_SurfaceOfRevolution.hxx>
#include <Handle_PGeom_SurfaceOfRevolution.hxx>
#include <Handle_Geom_ToroidalSurface.hxx>
#include <Handle_PGeom_ToroidalSurface.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Handle_PGeom_Transformation.hxx>
#include <Handle_Geom_TrimmedCurve.hxx>
#include <Handle_PGeom_TrimmedCurve.hxx>
#include <Handle_Geom_VectorWithMagnitude.hxx>
#include <Handle_PGeom_VectorWithMagnitude.hxx>
class Geom_Axis1Placement;
class PGeom_Axis1Placement;
class Geom_Axis2Placement;
class PGeom_Axis2Placement;
class Geom_BSplineCurve;
class PGeom_BSplineCurve;
class Geom_BSplineSurface;
class PGeom_BSplineSurface;
class Geom_BezierCurve;
class PGeom_BezierCurve;
class Geom_BezierSurface;
class PGeom_BezierSurface;
class Geom_CartesianPoint;
class PGeom_CartesianPoint;
class Geom_Circle;
class PGeom_Circle;
class Geom_ConicalSurface;
class PGeom_ConicalSurface;
class Geom_Curve;
class PGeom_Curve;
class Geom_CylindricalSurface;
class PGeom_CylindricalSurface;
class Geom_Direction;
class PGeom_Direction;
class Geom_Ellipse;
class PGeom_Ellipse;
class Geom_Hyperbola;
class PGeom_Hyperbola;
class Geom_Line;
class PGeom_Line;
class Geom_OffsetCurve;
class PGeom_OffsetCurve;
class Geom_OffsetSurface;
class PGeom_OffsetSurface;
class Geom_Parabola;
class PGeom_Parabola;
class Geom_Plane;
class PGeom_Plane;
class Geom_Point;
class PGeom_Point;
class Geom_RectangularTrimmedSurface;
class PGeom_RectangularTrimmedSurface;
class Geom_SphericalSurface;
class PGeom_SphericalSurface;
class Geom_Surface;
class PGeom_Surface;
class Geom_SurfaceOfLinearExtrusion;
class PGeom_SurfaceOfLinearExtrusion;
class Geom_SurfaceOfRevolution;
class PGeom_SurfaceOfRevolution;
class Geom_ToroidalSurface;
class PGeom_ToroidalSurface;
class Geom_Transformation;
class PGeom_Transformation;
class Geom_TrimmedCurve;
class PGeom_TrimmedCurve;
class Geom_VectorWithMagnitude;
class PGeom_VectorWithMagnitude;


//! This  package   provides   methods  to   translate
//! transient objects from Geom to  persistent objects
//! from PGeom and vice-versa. No  track from previous
//! translation is kept.
//!
//! Data is not shared:
//! -   between transient and persistent objects, or
//! -   between two successive translations of the
//! same object.
class MgtGeom 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Axis1Placement) Translate (const Handle(PGeom_Axis1Placement)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Axis1Placement) Translate (const Handle(Geom_Axis1Placement)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Axis2Placement) Translate (const Handle(PGeom_Axis2Placement)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Axis2Placement) Translate (const Handle(Geom_Axis2Placement)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_BSplineCurve) Translate (const Handle(PGeom_BSplineCurve)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_BSplineCurve) Translate (const Handle(Geom_BSplineCurve)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_BSplineSurface) Translate (const Handle(PGeom_BSplineSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_BSplineSurface) Translate (const Handle(Geom_BSplineSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_BezierCurve) Translate (const Handle(PGeom_BezierCurve)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_BezierCurve) Translate (const Handle(Geom_BezierCurve)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_BezierSurface) Translate (const Handle(PGeom_BezierSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_BezierSurface) Translate (const Handle(Geom_BezierSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_CartesianPoint) Translate (const Handle(PGeom_CartesianPoint)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_CartesianPoint) Translate (const Handle(Geom_CartesianPoint)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Circle) Translate (const Handle(PGeom_Circle)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Circle) Translate (const Handle(Geom_Circle)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_ConicalSurface) Translate (const Handle(PGeom_ConicalSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_ConicalSurface) Translate (const Handle(Geom_ConicalSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  //! Raises NullObject if the PObj type has no mapping
  Standard_EXPORT static   Handle(Geom_Curve) Translate (const Handle(PGeom_Curve)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  //! Raises NullObject if the TObj type has no mapping
  Standard_EXPORT static   Handle(PGeom_Curve) Translate (const Handle(Geom_Curve)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_CylindricalSurface) Translate (const Handle(PGeom_CylindricalSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_CylindricalSurface) Translate (const Handle(Geom_CylindricalSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Direction) Translate (const Handle(PGeom_Direction)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Direction) Translate (const Handle(Geom_Direction)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Ellipse) Translate (const Handle(PGeom_Ellipse)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Ellipse) Translate (const Handle(Geom_Ellipse)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Hyperbola) Translate (const Handle(PGeom_Hyperbola)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Hyperbola) Translate (const Handle(Geom_Hyperbola)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Line) Translate (const Handle(PGeom_Line)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Line) Translate (const Handle(Geom_Line)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_OffsetCurve) Translate (const Handle(PGeom_OffsetCurve)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_OffsetCurve) Translate (const Handle(Geom_OffsetCurve)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_OffsetSurface) Translate (const Handle(PGeom_OffsetSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_OffsetSurface) Translate (const Handle(Geom_OffsetSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Parabola) Translate (const Handle(PGeom_Parabola)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Parabola) Translate (const Handle(Geom_Parabola)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Plane) Translate (const Handle(PGeom_Plane)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Plane) Translate (const Handle(Geom_Plane)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Point) Translate (const Handle(PGeom_Point)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Point) Translate (const Handle(Geom_Point)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_RectangularTrimmedSurface) Translate (const Handle(PGeom_RectangularTrimmedSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_RectangularTrimmedSurface) Translate (const Handle(Geom_RectangularTrimmedSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_SphericalSurface) Translate (const Handle(PGeom_SphericalSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_SphericalSurface) Translate (const Handle(Geom_SphericalSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  //! Raises NullObject if the PObj type has no mapping
  Standard_EXPORT static   Handle(Geom_Surface) Translate (const Handle(PGeom_Surface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  //! Raises NullObject if the TObj type has no mapping
  Standard_EXPORT static   Handle(PGeom_Surface) Translate (const Handle(Geom_Surface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_SurfaceOfLinearExtrusion) Translate (const Handle(PGeom_SurfaceOfLinearExtrusion)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_SurfaceOfLinearExtrusion) Translate (const Handle(Geom_SurfaceOfLinearExtrusion)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_SurfaceOfRevolution) Translate (const Handle(PGeom_SurfaceOfRevolution)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_SurfaceOfRevolution) Translate (const Handle(Geom_SurfaceOfRevolution)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_ToroidalSurface) Translate (const Handle(PGeom_ToroidalSurface)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_ToroidalSurface) Translate (const Handle(Geom_ToroidalSurface)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_Transformation) Translate (const Handle(PGeom_Transformation)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_Transformation) Translate (const Handle(Geom_Transformation)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_TrimmedCurve) Translate (const Handle(PGeom_TrimmedCurve)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_TrimmedCurve) Translate (const Handle(Geom_TrimmedCurve)& TObj) ;
  
  //! Translate <PObj> to its Transient equivalent from Geom.
  Standard_EXPORT static   Handle(Geom_VectorWithMagnitude) Translate (const Handle(PGeom_VectorWithMagnitude)& PObj) ;
  
  //! Translate <TObj> to its Persistent equivalent from PGeom.
  Standard_EXPORT static   Handle(PGeom_VectorWithMagnitude) Translate (const Handle(Geom_VectorWithMagnitude)& TObj) ;




protected:





private:





};







#endif // _MgtGeom_HeaderFile
