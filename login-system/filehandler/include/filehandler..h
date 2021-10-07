#include <fstream>
#include <memory>

using std::unique_ptr;
using std::ifstream;

class FileHandler
{
    public:
        FileHandler();
        ~FileHandler();
    
    private:
        std::unique_ptr<ifstream> filepointer;

};