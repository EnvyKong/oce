// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_Mesh_HeaderFile
#define _StlMesh_Mesh_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StlMesh_Mesh.hxx>

#include <Standard_Integer.hxx>
#include <StlMesh_SequenceOfMeshDomain.hxx>
#include <gp_XYZ.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Standard_NegativeValue;
class Standard_NullValue;
class Standard_NoSuchObject;
class gp_XYZ;
class StlMesh_SequenceOfMeshTriangle;
class TColgp_SequenceOfXYZ;


//! Mesh definition.  The mesh contains one or several
//! domains. Each  mesh   domain  contains a  set   of
//! triangles. Each domain can have its own deflection
//! value.
class StlMesh_Mesh : public MMgt_TShared
{

public:

  
  //! Creates an empty mesh.
  Standard_EXPORT StlMesh_Mesh();
  
  //! Adds a   new mesh domain.  The  mesh deflection is
  //! defaulted to Confusion from package Precision.
  Standard_EXPORT virtual   void AddDomain() ;
  
  //! Adds a new mesh domain.
  //! Raised if the deflection is lower than zero
  //! Raised if  the deflection is lower  than Confusion
  //! from package Precision
  Standard_EXPORT virtual   void AddDomain (const Standard_Real Deflection) ;
  
  //! Build a triangle with the triplet of vertices (V1,
  //! V2, V3).  This triplet defines  the indexes of the
  //! vertex in the  current domain The coordinates  Xn,
  //! Yn,  Zn  defines   the normal  direction   to  the
  //! triangle.  Returns  the  range of  the triangle in
  //! the current domain.
  Standard_EXPORT virtual   Standard_Integer AddTriangle (const Standard_Integer V1, const Standard_Integer V2, const Standard_Integer V3, const Standard_Real Xn, const Standard_Real Yn, const Standard_Real Zn) ;
  
  //! Returns the  range  of the  vertex in the  current
  //! domain.
  Standard_EXPORT virtual   Standard_Integer AddVertex (const Standard_Real X, const Standard_Real Y, const Standard_Real Z) ;
  
  //! Returns  the range of   the vertex in  the current
  //! domain.  The current vertex is not inserted in the
  //! mesh if it already exist.
  Standard_EXPORT virtual   Standard_Integer AddOnlyNewVertex (const Standard_Real X, const Standard_Real Y, const Standard_Real Z) ;
  
  //! Each  vertex of  the  mesh verifies  the following
  //! relations :
  //! XYZMin.X() <= X <= XYZMax.X()
  //! XYZMin.Y() <= Y <= XYZMax.y()
  //! XYZMin.Z() <= Z <= XYZMax.Z()
  Standard_EXPORT virtual   void Bounds (gp_XYZ& XYZmax, gp_XYZ& XYZmin)  const;
  
  Standard_EXPORT virtual   void Clear() ;
  
  //! Returns the deflection of the mesh of the domain
  //! of range <DomainIndex>.
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT virtual   Standard_Real Deflection (const Standard_Integer DomainIndex)  const;
  
    virtual   Standard_Boolean IsEmpty()  const;
  
  //! Number of domains in the mesh.
    virtual   Standard_Integer NbDomains()  const;
  
  //! Cumulative Number of triangles in the mesh.
      Standard_Integer NbTriangles()  const;
  
  //! Number of  triangles   in  the  domain   of  range
  //! <DomainIndex>.
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT virtual   Standard_Integer NbTriangles (const Standard_Integer DomainIndex)  const;
  
  //! Cumulative Number of vertices in the mesh.
    virtual   Standard_Integer NbVertices()  const;
  
  //! Number of vertices in the domain of range
  //! <DomainIndex>.
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT virtual   Standard_Integer NbVertices (const Standard_Integer DomainIndex)  const;
  
  //! Returns the set of triangle   of   the  mesh domain   of   range
  //! <DomainIndex>.
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT virtual  const  StlMesh_SequenceOfMeshTriangle& Triangles (const Standard_Integer DomainIndex = 1)  const;
  
  //! Returns  the coordinates   of the  vertices of the
  //! mesh domain   of range <DomainIndex>.   {XV1, YV1,
  //! ZV1, XV2, YV2, ZV2, XV3,.....}
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT virtual  const  TColgp_SequenceOfXYZ& Vertices (const Standard_Integer DomainIndex = 1)  const;




  DEFINE_STANDARD_RTTI(StlMesh_Mesh)

protected:


  Standard_Integer nbTriangles;
  Standard_Integer nbVertices;
  StlMesh_SequenceOfMeshDomain domains;
  gp_XYZ xyzmax;
  gp_XYZ xyzmin;


private: 




};


#include <StlMesh_Mesh.lxx>





#endif // _StlMesh_Mesh_HeaderFile
