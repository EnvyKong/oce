// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfMapOfPoint_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfMapOfPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint.hxx>
class Standard_NoSuchObject;
class TopOpeBRepDS_PointData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfPoint;
class TopOpeBRepDS_DataMapNodeOfMapOfPoint;



class TopOpeBRepDS_DataMapIteratorOfMapOfPoint  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfPoint();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfPoint(const TopOpeBRepDS_MapOfPoint& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_MapOfPoint& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopOpeBRepDS_PointData& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfMapOfPoint_HeaderFile
