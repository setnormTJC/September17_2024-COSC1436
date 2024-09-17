

#include <iostream>

//#include<thread>

int main()
{
    std::cout << "Hello World!\n";

    ////while (true)
    ////{
    //std::cout << "\a";
    ////this::thread::sleep_for(100 ms)

    //std::cout << "adsfasfd\t\\asdfads";
    //}

    //"raw string literal" 
    std::cout << R"(\n\t\a\\)" << "\n";

    std::cout << "After the \"raw string literal\"\n";

    std::cout << R"(___________                        _________                      __  .__    .__                 
\__    ___/__.__.______   ____    /   _____/ ____   _____   _____/  |_|  |__ |__| ____    ____   
  |    | <   |  |\____ \_/ __ \   \_____  \ /  _ \ /     \_/ __ \   __\  |  \|  |/    \  / ___\  
  |    |  \___  ||  |_> >  ___/   /        (  <_> )  Y Y  \  ___/|  | |   Y  \  |   |  \/ /_/  > 
  |____|  / ____||   __/ \___  > /_______  /\____/|__|_|  /\___  >__| |___|  /__|___|  /\___  /  
          \/     |__|        \/          \/             \/     \/          \/        \//_____/  )";
}

