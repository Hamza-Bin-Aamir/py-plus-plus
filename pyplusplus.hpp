// Configuration
#define PPP_CONFG_INCL_COMMON true // Should the extension automagically include common libraries like iostream, string, vector to reduce boilerplate?
#define PPP_CONFG_NMSPC_STD true // Should the extension include the std namespace automatically to reduce boilerplate?
#define PPP_SAFETY false // Disables the unsafe features of this extension, still do not recommend using this for production code


// The most illegal code I have ever written in my life
#define print(x) std::cout << x << std::endl; // yes the semicolons here are intentional
#define input(x, y) std::cout << x << ": "; std::cin >> y;
#define IF_ELSE(condition, ontrue, onfalse) ((condition) ? ontrue : onfalse)




// Conditional code
#if PPP_CONFG_INCL_COMMON
    #include <iostream> // removing this will mess with generally everything
    #include <utility>
    #include <vector>
    #include <cstdlib>
    #include <string>
#endif

#if PPP_CONFG_NMSPC_STD
    using namespace std;
#endif