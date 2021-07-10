// void main(){

// giveIt();
// print('no no no');
// }

// void giveIt() async{

// List myList = [1,2, 3,4,5,6, 7, 8, 9];
// Map myMap = {"aryan": 23, "yo": 34};
// String? mine;

// Future<String> trying1() async{

//   return 'jai hind1';
// }
// Future<String> trying2() async{

//   return 'jai hind2';
// }
// Future<String> trying3() async{

//   return 'jai hind3';
// }

// var mymyfuture = await Future.wait([trying1(), trying2(), trying3()]);

// print(mymyfuture);
// // print(await trying());
// print('nahi nahi nahi');

// }

// import 'dart:async';

// void main() async{

// // Future.delayed(Duration(seconds: 5), ()=> print('ho gaya'));
// // Future.error('This is a fucking error');
// var justAnotherTimer = Timer.periodic(Duration(seconds: 2), (_) { 
  
//   print('Another instance of timer class / object');

// });

// Future.delayed(Duration(seconds: 15), (){

// justAnotherTimer.cancel();

// });
// }

// import 'dart:async';



// Future<String> jai() async{

//   return 'jai';
// }
// Future<String> jai1() async{

//   return 'jai1';
// }


// void main(){

// // print('hey yo uIm very hungry to do what I ')

// List<int> myList = [1,2, 3,4,5,6, 7, 8, 9];
// Map myMap = {"aryan": 23, "yo": 34};

// try{
// print(myList.hashCode);
// print(myList.runtimeType);
// // print(myList.iterator.current);

// print(myMap.keys);
// }catch(e){

//   print('Error aaya bhaiya saawdhan!!!!!!!!');
// }
// }



// class Trying{

//   var yo  = null; 
//   var tum ;
//   String? no ;

//   // Trying();

//   Trying.hello({String? just, String? first}){

//     print(just);
//     print(first);
//   }

//   Trying.wakanda(){
//     yo = 'kindly recharge your balance!!!!';
//   }

//   factory Trying(String name, String age, String nice){

//     return Trying('hey','js','s');
//   }
// }
// int get running => 2;

// void set fool(String nothing){

//   var poop;
//   poop = nothing;
// }
// void silly(){
//   String name = 'Aryan';

  

//   print(running);
// }

// void main(){

//   Trying.hello(first: 'hey', just: 'bye');
//   Trying.wakanda();
//   // print(Trying().yo);

  
// }





// abstract class Jutsu{
//   void mine(){
//     print('mine');
//   }
// }

// class People implements Jutsu{
// @override
// void mine(){}
// }

// void main(){

//   var justanother = 'aryan'.toUpperCase();
//   print(justanother);
// }

// Function? tryi(){

  
// }



void main(){

  List now = [1,3,4];

  now.whereType();
  print(now);
}