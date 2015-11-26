#include <iostream>
#include <json.h>
#include <fstream>

using namespace std;

int main() {
    bool alive = true;
    while (alive){
        Json::Value root;   // will contains the root value after parsing.
        Json::Reader reader;
        std::ifstream test("C:\\Users\\KEVIN\\ClionProjects\\SampleJSONCpp\\test", std::ifstream::binary);
        bool parsingSuccessful = reader.parse( test, root, false );
        if ( !parsingSuccessful )
        {
            // report to the user the failure and their locations in the document.
            std::cout  << reader.getFormatedErrorMessages()
            << "\n";
        }

        std::string encoding = root.get("encoding", "UTF-8" ).asString();
        std::cout << encoding << "\n";
        alive = false;
    }
    return 0;
}