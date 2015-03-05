#include <stdio.h>
#include<sys/types.h>
#include<sys/times.h>

#define  Null     0
#define  false    0
#define  true     1
#define  Ident_1  0
#define  Ident_2  1
#define  Ident_3  2
#define  Ident_4  3
#define  Ident_5  4

#define  Large_Time             1000000.0
#define  Number_Of_Executions   100000 
#define  Number_Of_Runs         20000
#define  Microseconds_Per_Clock 1000000.0

#define  Frequency		60

typedef int Enumeration;
typedef int One_To_Fifty;
typedef int One_To_Thirty;
typedef char Capital_Letter;
typedef int Boolean;

typedef struct record
{
	struct record *Pointer_Comp;
	Enumeration    Discr;
	union {
		struct{
			Enumeration Enum_Comp;
			int	    Int_Comp;
			char 	    String_Comp [31];
		      } variant_1;
		struct{
			Enumeration Enum_Comp_2;
			char 	    String_Comp_2 [31];
		      } variant_2;
		struct{
			char        Char_Comp_1;
			char        Char_Comp_2;
		      } variant_3;
              } variant;
} Record_Type, *Record_Pointer;


/*COMIENZO DEL SEGUNDO MODULO*/

Record_Pointer   Pointer_Glob,
		 Next_Pointer_Glob;
int		 Int_Glob;
Boolean 	 Bool_Glob;
char		 Char_Glob_1,
		 Char_Glob_2;
int		 Array_Glob_1 [30];
int		 Array_Glob_2 [30] [30];

Record_Type	 First_Record,
		 Second_Record;

main()
{

	int     Int_Loc_1,
		Int_Loc_2,
		Int_Loc_3;
	char	Char_Index;
	Enumeration   Enum_Loc;
	char          String_Loc_1 [31],
		      String_Loc_2 [31];

	struct  tms  	begin_time,
			end_time;
	int		Meas_Index,
			Run_Index;
	float		User_Time,
			System_Time,
		       	Empty_Loop_User_Time,
			Empty_Loop_System_Time,
			Total_Time,
			Sum_User_Time,
			Sum_System_Time,
			Sum_Total_Time,
			Min_User_Time,
			Min_System_Time,
			Min_Total_Time,
			Aver_User_Time,
			Aver_System_Time,
			Aver_Total_Time;

/*Pasamos ahora a la parte de inicializacion de variables*/

Next_Pointer_Glob = &Second_Record;
Pointer_Glob = &First_Record;
Pointer_Glob->Pointer_Comp = Next_Pointer_Glob;
Pointer_Glob->Discr = Ident_1;
Pointer_Glob->variant.variant_1.Enum_Comp = Ident_3;
Pointer_Glob->variant.variant_1.Int_Comp = 40;
strcpy(Pointer_Glob->variant.variant_1.String_Comp,
	"DHRYSTONE PROGRAM,SOME STRING");
strcpy(String_Loc_1,"DHRYSTONE PROGRAM,1¨S STRING");




Sum_User_Time = 0.0;
Sum_System_Time = 0.0;
Sum_Total_Time = 0.0;
Min_User_Time = Large_Time;
Min_System_Time = Large_Time;
Min_Total_Time = Large_Time;


for(Run_Index = 1;Run_Index <= Number_Of_Runs; ++Run_Index)
{

/*Aqui comienza el TIMER*/

times(&begin_time);

for(Meas_Index = 1;Meas_Index <= Number_Of_Executions; ++Meas_Index)
{
	Proc_5();
	Proc_4();
	Int_Loc_1 = 2;
	Int_Loc_2 = 3;
	strcpy(String_Loc_2, "DHRYSTONE PROGRAM,2¨ND STRING");
	Enum_Loc = Ident_2;
	Bool_Glob = ! Func_2(String_Loc_1 ,String_Loc_2);
	while(Int_Loc_1 < Int_Loc_2)
	  {
		Int_Loc_3 = 5 * Int_Loc_1 - Int_Loc_2;
		Proc_7(Int_Loc_1, Int_Loc_2, &Int_Loc_3);
		Int_Loc_1 += 1;
	  }

	Proc_8(Array_Glob_1, Array_Glob_2, Int_Loc_1, Int_Loc_3);
	Proc_1(Pointer_Glob);
	for(Char_Index = 'A'; Char_Index <= Char_Glob_2; ++Char_Index)
	  {
		if (Enum_Loc == Func_1 (Char_Index, 'C'))
			Proc_6 (Ident_1, &Enum_Loc);
	  }

	Int_Loc_3 = Int_Loc_2 * Int_Loc_1;
	Int_Loc_2 = Int_Loc_3 / Int_Loc_1;
	Int_Loc_2 = 7 * (Int_Loc_3 - Int_Loc_2) - Int_Loc_1;
 	Proc_2 (&Int_Loc_1);


}

/*Aqui acaba el TIMER*/

times(&end_time);

User_Time = (end_time.tms_utime - begin_time.tms_utime)
	* Microseconds_Per_Clock / (Frequency * Number_Of_Executions);
System_Time = (end_time.tms_stime - begin_time.tms_stime)
	* Microseconds_Per_Clock / (Frequency * Number_Of_Executions);

times(&begin_time);

for(Meas_Index = 1; Meas_Index <= Number_Of_Executions; ++Meas_Index)
	{
		/*Esta vacio*/
	}
times(&end_time);

Empty_Loop_User_Time = (end_time.tms_utime - begin_time.tms_utime)
	* Microseconds_Per_Clock / (Frequency * Number_Of_Executions);
Empty_Loop_System_Time = (end_time.tms_stime - begin_time.tms_stime)
	* Microseconds_Per_Clock / (Frequency * Number_Of_Executions);

User_Time = User_Time - Empty_Loop_User_Time;
System_Time = System_Time - Empty_Loop_System_Time;
Total_Time = User_Time + System_Time;


Sum_User_Time += User_Time;
Sum_System_Time += System_Time;
Sum_Total_Time += Total_Time;
if (User_Time < Min_User_Time)
	Min_User_Time = User_Time;
if (System_Time < Min_System_Time)
	Min_System_Time = System_Time;
if (Total_Time < Min_Total_Time)
	Min_Total_Time = Total_Time;
}

Aver_User_Time = Sum_User_Time / Number_Of_Runs;
Aver_System_Time = Sum_System_Time / Number_Of_Runs;
Aver_Total_Time = Sum_Total_Time / Number_Of_Runs;


}

/*Primer Procedimiento*/

Proc_1 (Pointer_Par_Val)

Record_Pointer Pointer_Par_Val;
{
	Record_Pointer Next_Record                  = Pointer_Par_Val->Pointer_Comp;
	*Pointer_Par_Val->Pointer_Comp              = *Pointer_Glob;
	Pointer_Par_Val->variant.variant_1.Int_Comp = 5;
	Next_Record->variant.variant_1.Int_Comp= 
		          Pointer_Par_Val->variant.variant_1.Int_Comp;
	Next_Record->Pointer_Comp                   = Pointer_Par_Val->Pointer_Comp;
	Proc_3(&Next_Record->Pointer_Comp);
	if (Next_Record->Discr == Ident_1)
	{
		Next_Record->variant.variant_1.Int_Comp = 6;
		Proc_6(Pointer_Par_Val->variant.variant_1.Enum_Comp,
		       &Next_Record->variant.variant_1.Enum_Comp);
		Next_Record->Pointer_Comp = Pointer_Glob->Pointer_Comp;
		
		Proc_7(Next_Record->variant.variant_1.Int_Comp,10,
		       &Next_Record->variant.variant_1.Int_Comp);
	}
	else 
		*Pointer_Par_Val = *Pointer_Par_Val->Pointer_Comp;
}/*Fin del primer procedimiento*/

/*Segundo procedimiento*/

Proc_2 (Int_Par_Ref)

One_To_Fifty	*Int_Par_Ref;

{
	One_To_Fifty   Int_Loc;
	Enumeration    Enum_Loc;
	
	Int_Loc  =  *Int_Par_Ref + 10;
	do  if (Char_Glob_1 == 'A')
	      {
		Int_Loc -= 1;
		*Int_Par_Ref = Int_Loc - Int_Glob;
		Enum_Loc = Ident_1;
	      }
	while (Enum_Loc != Ident_1); 
}/*Fin del segundo procedimiento*/

/*Tercer procedimiento*/

Proc_3 (Pointer_Par_Ref)
  
Record_Pointer  *Pointer_Par_Ref;
{
	if(Pointer_Glob != Null)
		*Pointer_Par_Ref = Pointer_Glob->Pointer_Comp;
	else
		Int_Glob = 100;
	Proc_7(10,Int_Glob,&Pointer_Glob->variant.variant_1.Int_Comp);
}/*Fin del procediminto tercero*/

/*Cuarto procedimiento*/

Proc_4 ()
{
	Boolean   Bool_Loc;
	Bool_Loc = Char_Glob_1 == 'A';
	Bool_Loc = Bool_Loc | Bool_Glob;
	Char_Glob_2 = 'B';

}/*Fin del procedimiento cuarto*/

/*Quinto Procedimiento*/

Proc_5 ()
{
	Char_Glob_1 = 'A';
	Bool_Glob = false;
}


/*COMIENZO DEL TERCER MODULO*/

Proc_6 (Enum_Par_Val, Enum_Par_Ref)

Enumeration  Enum_Par_Val,
	     *Enum_Par_Ref;
{
	*Enum_Par_Ref = Enum_Par_Val;
	if(! Func_3(Enum_Par_Val))
	   *Enum_Par_Ref = Ident_4;
	switch(Enum_Par_Val)
	{
	   case Ident_1:
		*Enum_Par_Ref = Ident_1;
		break;
	   case Ident_2:
	 	if(Int_Glob > 100)
		  *Enum_Par_Ref = Ident_1;
		else  
		  *Enum_Par_Ref = Ident_4;
		break;
	   case Ident_3:
		*Enum_Par_Ref = Ident_2;
		break;
	   case Ident_4: break;
	   case Ident_5:
		*Enum_Par_Ref = Ident_3;
		break;
	}
}/*Fin del sexto procedimiento*/

/*SÅptimo pocedimiento*/

Proc_7(Int_Par_Val1,Int_Par_Val2, Int_Par_Ref)

One_To_Fifty    Int_Par_Val1,
		Int_Par_Val2,
		*Int_Par_Ref;
{
	One_To_Fifty	Int_Loc;
	Int_Loc = Int_Par_Val1 + 2;
	*Int_Par_Ref = Int_Par_Val2 + Int_Loc;
}/*Fin del sÅptimo procedimiento*/

/*Octavo procedimiento*/

Proc_8(Array_Par_1_Ref,Array_Par_2_Ref,Int_Par_Val_1,Int_Par_Val_2)

int	Int_Par_Val_1,
	Int_Par_Val_2;
int	Array_Par_1_Ref [30];
int 	Array_Par_2_Ref [30] [30];

{
	One_To_Fifty	Int_Index,
			Int_Loc;
	Int_Loc = Int_Par_Val_1 + 5;
	Array_Par_1_Ref [Int_Loc] = Int_Par_Val_2;
	Array_Par_1_Ref [Int_Loc + 1] = Array_Par_1_Ref [Int_Loc];
	Array_Par_1_Ref [Int_Loc + 30] = Int_Loc;
	for (Int_Index = Int_Loc ; Int_Index <= Int_Loc+1; ++Int_Index)
	   Array_Par_2_Ref [Int_Loc] [Int_Index] = Int_Loc;
	Array_Par_2_Ref [Int_Loc] [Int_Loc - 1] += 1;
	Array_Par_2_Ref [Int_Loc+20][Int_Loc]=Array_Par_1_Ref[Int_Loc];
	Int_Glob = 5;
}/*Fin del octavo procemiento*/

/*Primera funciÆn*/

Enumeration Func_1(Char_Par_1_Val,Char_Par_2_Val)

Capital_Letter  Char_Par_1_Val,
		Char_Par_2_Val;

{
	Capital_Letter	Char_Loc_1,
			Char_Loc_2;
	Char_Loc_1 = Char_Par_1_Val;
	Char_Loc_2 = Char_Loc_1;
	if (Char_Loc_2 != Char_Par_2_Val)
		return(Ident_1);
	else
		return(Ident_2);
}/*Fin de la primera funciÆn*/

/*Segunda funciÆn*/

int Func_2 (String_Par_1_Ref,String_Par_2_Ref)

char	String_Par_1_Ref [31],
	String_Par_2_Ref [31];
{
	One_To_Thirty	Int_Loc;
	Capital_Letter	Char_Loc;

	Int_Loc = 2;
	while (Int_Loc <= 2)
	   if (Func_1 (String_Par_1_Ref [Int_Loc],
		String_Par_2_Ref [Int_Loc + 1]) == Ident_1)
		{
		  Char_Loc = 'A';
		  Int_Loc += 1;
		}
	if (Char_Loc >= 'W' && Char_Loc < 'Z')
	   Int_Loc = 7;
	if (Char_Loc == 'X')
	   return (true);
	else
	   {
	     if(strcmp (String_Par_1_Ref,String_Par_2_Ref) > 0)
		{
		  Int_Loc += 7;
		  return (true);
		}
	     else
		  return (false);
	   }
}/*Fin de la segunda funciÆn*/

/*Tercera funciÆn*/

Boolean Func_3 (Enum_Par_Val)

Enumeration Enum_Par_Val;

{
	Enumeration 	Enum_Loc;
	

	Enum_Loc = Enum_Par_Val;
	if (Enum_Loc == Ident_3)
	   return (true);
}
 