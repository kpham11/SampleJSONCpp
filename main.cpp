#include "IO.h"
#include "FlightScenarioIO.h"
#include "SimulationFlightsIO.h"

using namespace std;
/*
int main() {
    bool alive = true;
    while (alive){
        Json::Value root;   // will contains the root value after parsing.
        Json::Reader reader;
        std::ifstream test("C:\\Users\\KEVIN\\ClionProjects\\SampleJSONCpp\\test", std::ifstream::binary);
        //test.close();
        bool parsingSuccessful = reader.parse( test, root, false );
        if ( !parsingSuccessful )
        {
            // report to the user the failure and their locations in the document.
            std::cout  << reader.getFormatedErrorMessages()
            << "\n";
        }

        std::cout << root.size() << "\n";

        int val1 = root["val1"].asInt();
        std::cout << val1 << "\n";

        std::ofstream file_id;
        file_id.open("C:\\Users\\KEVIN\\ClionProjects\\SampleJSONCpp\\file.json",fstream::out);

        Json::Value output;
        //output["value"] = root["val1"].asInt() + root["val2"].asInt();

        Json::Value vec(Json::arrayValue);
        vec.append(Json::Value(1));
        vec.append(Json::Value("ROME"));
        vec.append(Json::Value(true));

        output["array"] = vec;
        //root["output"] = output;

        Json::StyledWriter styledWriter;
        file_id << styledWriter.write(root);

        file_id.close();

        alive = false;
    }
    return 0;
}*/

int main() {
    FlightScenarioIO fs;
    Json::Value readFile = fs.readFile();
    fs.writeFile(readFile);

    SimulationFlightsIO sf;
    Json::Value readFile2 = sf.readFile();
    sf.writeFile(readFile2);
}