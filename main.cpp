#include <iostream>

#include "test/tester.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Tester::execute();

    SelfList<int> list(SelfList<int>::Transpose);

    for (int i = 0; i < 10; i++) {
        list.insert(i);
    }

    list.print(); cout << endl;
    list.find(9);
    list.print();

//    SelfList<int> list(SelfList<int>::Move);

// //--------------------------------------TRAITS-LIST-MY-OWN-TESTS-----------------------------------------------------

// //-----------------------------------TYPE-TRAIT-"FLOAT"---------------------------------------
// //-----------------------------PROVING-FIND-WORKS-GOOD---------------------------
//    TraitsList<Float> traitsList4;
//    traitsList4.insert(5.2);
//    traitsList4.print();
//    traitsList4.insert(4.3);
//    traitsList4.print();
//    traitsList4.insert(20.1);
//    traitsList4.print();
//    traitsList4.insert(40.9);
//    traitsList4.print();
//    traitsList4.insert(50.5);
//    traitsList4.print(); std::cout << std::endl;
//
//    cout << "Was 4.3 founded? (Yes: 1 No: 0): " << traitsList4.find(4.3) << endl;
//    cout << "Was 5.2 founded? (Yes: 1 No: 0): " << traitsList4.find(5.2) << endl;
//    cout << "Was 300.0 founded? (Yes: 1 No: 0): " << traitsList4.find(300.0) << endl;
// //----------------------------------------------------------------------------------

// //----------PROVING-METHODS-INSERT-AND-REMOVE--------------
// //-----INSERT-WORKS-VERY-GOOD-IN-SELF-LIST-------
//    TraitsList<Float> traitsList3;
//    traitsList3.insert(5.2);
//    traitsList3.print();
//    traitsList3.insert(4.3);
//    traitsList3.print();
//    traitsList3.insert(20.1);
//    traitsList3.print();
//    traitsList3.insert(40.9);
//    traitsList3.print();
//    traitsList3.insert(50.5);
//    traitsList3.print(); std::cout << std::endl;
// //------------------------------------------------

// //-----REMOVE-WORKS-VERY-GOOD-IN-TRAITS-LIST-------
//    traitsList3.remove(20.1);
//    traitsList3.print();
//    traitsList3.remove(100.0);
//    traitsList3.print();
//    traitsList3.remove(4.3);
//    traitsList3.print();
//    traitsList3.remove(5.2);
//    traitsList3.print();
//    traitsList3.remove(40.9);
//    traitsList3.print();
//    traitsList3.remove(50.5);
//    traitsList3.print();
//    traitsList3.remove(1000.1);
//    traitsList3.print();
// //------------------------------------------------
// //------------------------------------------------------------
// //---------------------------------------------------------------------------------------------

// //-----------------------------------TYPE-TRAIT-"INTEGER"---------------------------------------
// //-----------------------------PROVING-FIND-WORKS-GOOD---------------------------
//    TraitsList<Integer> traitsList2;
//    traitsList2.insert(5);
//    traitsList2.print();
//    traitsList2.insert(4);
//    traitsList2.print();
//    traitsList2.insert(20);
//    traitsList2.print();
//    traitsList2.insert(40);
//    traitsList2.print();
//    traitsList2.insert(50);
//    traitsList2.print(); std::cout << std::endl;
//
//    cout << "Was 4 founded? (Yes: 1 No: 0): " << traitsList2.find(4) << endl;
//    cout << "Was 5 founded? (Yes: 1 No: 0): " << traitsList2.find(5) << endl;
//    cout << "Was 300 founded? (Yes: 1 No: 0): " << traitsList2.find(300) << endl;
// //----------------------------------------------------------------------------------

// //----------PROVING-METHODS-INSERT-AND-REMOVE--------------
// //-----INSERT-WORKS-VERY-GOOD-IN-SELF-LIST-------
//    TraitsList<Integer> traitsList;
//    traitsList.insert(5);
//    traitsList.print();
//    traitsList.insert(4);
//    traitsList.print();
//    traitsList.insert(20);
//    traitsList.print();
//    traitsList.insert(40);
//    traitsList.print();
//    traitsList.insert(50);
//    traitsList.print(); std::cout << std::endl;
// //------------------------------------------------

// //-----REMOVE-WORKS-VERY-GOOD-IN-TRAITS-LIST-------
//    traitsList.remove(20);
//    traitsList.print();
//    traitsList.remove(100);
//    traitsList.print();
//    traitsList.remove(4);
//    traitsList.print();
//    traitsList.remove(5);
//    traitsList.print();
//    traitsList.remove(40);
//    traitsList.print();
//    traitsList.remove(50);
//    traitsList.print();
//    traitsList.remove(1000);
//    traitsList.print();
// //------------------------------------------------
// //------------------------------------------------------------
// //---------------------------------------------------------------------------------------------

// //-------------------------------------------------------------------------------------------------------------------


// //--------------------------------SELF-ORGANIZING-LIST-MY-OWN-TESTS--------------------------------------------------

// //---------COUNT-METHOD-WORKS-GOOD------------
//    SelfList<int> lst3(SelfList<int>::Count);
//
//    lst3.insert(5);
//    lst3.print();
//    lst3.insert(4);
//    lst3.print();
//    lst3.insert(20);
//    lst3.print();
//    lst3.insert(40);
//    lst3.print();
//    lst3.insert(50);
//    lst3.print(); std::cout << std::endl;
//
//    lst3.find(20);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(5);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(5);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(5);
//    lst3.print();
//    lst3.find(20);
//    lst3.print();
//    lst3.find(4);
//    lst3.print();
//    lst3.find(4);
//    lst3.print();
//    lst3.find(4);
//    lst3.print();
//    lst3.find(50);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(20);
//    lst3.print();
//    lst3.find(20);
//    lst3.print();
//    lst3.find(40);
//    lst3.print();
//    lst3.find(20);
//    lst3.print();
//    lst3.find(50);
//    lst3.print();
//    lst3.find(50);
//    lst3.print();
//    lst3.find(50);
//    lst3.print();
//    lst3.find(400);
//    lst3.print();
//    lst3.find(500);
//    lst3.print();
// //------------------------------------------------

// //---------TRANSPOSE-METHOD-WORKS-GOOD------------
//    SelfList<int> lst2(SelfList<int>::Transpose);
//
//    lst2.insert(5);
//    lst2.print();
//    lst2.insert(4);
//    lst2.print();
//    lst2.insert(20);
//    lst2.print();
//    lst2.insert(40);
//    lst2.print();
//    lst2.insert(50);
//    lst2.print(); std::cout << std::endl;
//
//
//    lst2.find(20);
//    lst2.print();
//    lst2.find(40);
//    lst2.print();
//    lst2.find(5);
//    lst2.print();
//    lst2.find(50);
//    lst2.print();
// //------------------------------------------------

// //---------MOVE-METHOD-WORKS-GOOD-----------------
//    SelfList<int> list(SelfList<int>::Move);
//
//    list.insert(5);
//    list.print();
//    list.insert(4);
//    list.print();
//    list.insert(20);
//    list.print();
//    list.insert(40);
//    list.print(); std::cout << std::endl;
//
//    list.find(20);
//    list.print();
//    list.find(4);
//    list.print();
//    list.find(20);
//    list.print();
//    list.find(5);
//    list.print();
//    list.find(5);
//    list.print();
//    list.find(4);
//    list.print();
// //------------------------------------------------

// //----------PROVING-METHODS-INSERT-AND-REMOVE--------------
// //-----INSERT-WORKS-VERY-GOOD-IN-SELF-LIST-------
//    SelfList<int> list0(SelfList<int>::Move);
//
//    list0.insert(5);
//    list0.print();
//    list0.insert(4);
//    list0.print();
//    list0.insert(20);
//    list0.print();
//    list0.insert(40);
//    list0.print(); std::cout << std::endl;
// //------------------------------------------------

// //-----REMOVE-WORKS-VERY-GOOD-IN-SELF-LIST-------
//    list0.remove(20);
//    list0.print();
//    list0.remove(100);
//    list0.print();
//    list0.remove(4);
//    list0.print();
//    list0.remove(5);
//    list0.print();
//    list0.remove(40);
//    list0.print();
// //------------------------------------------------
// //------------------------------------------------------------

// //-------------------------------------------------------------------------------------------------------------------


    return EXIT_SUCCESS;

}

