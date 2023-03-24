/*
Template: Used to create generic type

    int (Fixed datatype) arr[0];

    <T>             arr[10];
    Space holder

To create a class template
    Syntax:
        template <class T> ...T works as space holder. Replace with specified type.
        class classname
        {
            T membername;
            public:
                rtype func(args...)
                ____
                _________
        };

    Syntax: Object declaration
        classname <datatype> objname;

    class template with multiple parameters
    syntax: 
        template <class T1, class T2, ..., class Tn>
    
    class classname
    {
        T1 member1;
        T2 member2;
        _______;
        _________;
        ______;
    };
    classname <datatype1(Replace T1), datatype2(Replace T2), ...> objname(args)... call of parameterized constructor;


*/