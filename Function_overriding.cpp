/*
Virtual Function:
    Runtime type identification (RTTI): 
        e.g., virtual void show() {___<Statements>___} ...RTTI using pointer ...derived class
                      void show() {___<Statements>___} ...without RTTI using pointer ...virtual class
        
        obj.display     ->
                            -> can bind compiletime because of different prototype
        obj.display(101)->

        obj.show() ...cannot bind compiletime because of same prototype, to avoid draw can differentiate method of base class we use "virtual" keyword

    Base *ptr = &b1;
        ptr -> show(); //call sent to base ...runtime check a reference
        ptr = &d1;
        ptr -> show(); //call sent to  derived

    

*/