
##  type convert
datatype int plus datatype unsigned int means that the int is to be converted into unsigned int 
which means that the negative int is to be converted into a very large possitive number.

## braces to initialize (list initialization)

using braces to initialize is a safe way which don't enable type convertion




  
    

# declare statements
base type + declarator(**声明符**)（declarator **declare a variable and its relationship** with the specific base type.
complex declare statements include *point and reference*

## reference 
using **base_type &variable** ti define reference, **variable** is the name of variable.
>int ival = 1034;
>
>int &refVal =  ival;//a reference must be initialized
initial a reference means **binding but not copy**. And a reference cannot be rebinded to another object.

and reference can't be binded to a iteral or calculated result.

using this to define **a reference of point**
>    int* b = &a;
>
>    int* &p = b;
>

### note
> int* a,b;//a is point ,b is int
> 
> //better way to code
> 
> int *a,b;
>
> //a way to define a reference to point
> 
> int *&b = ptr;
>
> //from **right to left** to read, the & operator has the direct impact on **b**, so b is a reference.
>



## const determiner
> const int k;// this is a wrong way to declare const int type
>
> //for that const int type has to be initialize at first.
>

## const reference
> const int &refer = a
>
> //a can be **const int,int double or anything else can be converted into int**
>
> // type(a)==int : a can be changed,be you can't use refer to change a's value;
>
> //type(a)==const int : a, refer both can't be changed
>
> //type(a)==double : refer was binded to **a temp variable** . change a don't change refer. because refer was a reference to temp


## low-level const && high-level const
> int i = 10;
> 
> int *const p1  = &i;//high-level
>
> const int*p = &i;//low-level      
>
> //high-level means can't change the value itself
>
> //low-level means to describe the variable pointed
>
>

# const expression:constexpr
*defination* : value can't be changed, and can ba calculated when compiled.

const: read only  initial when program is running
constexpr : const value  initial in compiling


# type alias
two way
> using
>
> using SI = sales_item;
>
> typedef 
>
> typedef double REAL;
>
> typedef REAL DOUBLE,*p;// p is alias of double *;
>
> NOTE
>
> typedef char *pstring;
>
> const char* p;// a point point to const variable;
>
> const pstring p;// const decorate pstring, so the point itself is const.