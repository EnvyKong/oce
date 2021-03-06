// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SequenceOfNodeRepresentation_HeaderFile
#define _StepFEA_SequenceOfNodeRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_StepFEA_NodeRepresentation.hxx>
#include <Handle_StepFEA_SequenceNodeOfSequenceOfNodeRepresentation.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_NodeRepresentation;
class StepFEA_SequenceNodeOfSequenceOfNodeRepresentation;



class StepFEA_SequenceOfNodeRepresentation  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepFEA_SequenceOfNodeRepresentation();
  
  Standard_EXPORT StepFEA_SequenceOfNodeRepresentation(const StepFEA_SequenceOfNodeRepresentation& Other);
  
  Standard_EXPORT   void Clear() ;
~StepFEA_SequenceOfNodeRepresentation()
{
  Clear();
}
  
  Standard_EXPORT  const  StepFEA_SequenceOfNodeRepresentation& Assign (const StepFEA_SequenceOfNodeRepresentation& Other) ;
 const  StepFEA_SequenceOfNodeRepresentation& operator = (const StepFEA_SequenceOfNodeRepresentation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StepFEA_NodeRepresentation)& T) ;
  
      void Append (StepFEA_SequenceOfNodeRepresentation& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepFEA_NodeRepresentation)& T) ;
  
      void Prepend (StepFEA_SequenceOfNodeRepresentation& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StepFEA_NodeRepresentation)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StepFEA_SequenceOfNodeRepresentation& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StepFEA_NodeRepresentation)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StepFEA_SequenceOfNodeRepresentation& S) ;
  
  Standard_EXPORT  const  Handle(StepFEA_NodeRepresentation)& First()  const;
  
  Standard_EXPORT  const  Handle(StepFEA_NodeRepresentation)& Last()  const;
  
      void Split (const Standard_Integer Index, StepFEA_SequenceOfNodeRepresentation& Sub) ;
  
  Standard_EXPORT  const  Handle(StepFEA_NodeRepresentation)& Value (const Standard_Integer Index)  const;
 const  Handle(StepFEA_NodeRepresentation)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StepFEA_NodeRepresentation)& I) ;
  
  Standard_EXPORT   Handle(StepFEA_NodeRepresentation)& ChangeValue (const Standard_Integer Index) ;
  Handle(StepFEA_NodeRepresentation)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StepFEA_NodeRepresentation)
#define SeqItem_hxx <StepFEA_NodeRepresentation.hxx>
#define TCollection_SequenceNode StepFEA_SequenceNodeOfSequenceOfNodeRepresentation
#define TCollection_SequenceNode_hxx <StepFEA_SequenceNodeOfSequenceOfNodeRepresentation.hxx>
#define Handle_TCollection_SequenceNode Handle_StepFEA_SequenceNodeOfSequenceOfNodeRepresentation
#define TCollection_SequenceNode_Type_() StepFEA_SequenceNodeOfSequenceOfNodeRepresentation_Type_()
#define TCollection_Sequence StepFEA_SequenceOfNodeRepresentation
#define TCollection_Sequence_hxx <StepFEA_SequenceOfNodeRepresentation.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepFEA_SequenceOfNodeRepresentation_HeaderFile
