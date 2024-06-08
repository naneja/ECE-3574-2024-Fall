/*
Create a CMake project from this file and 
write appropriate test cases using Catch2
*/
#include <iostream>
#include <fstream>
#include <string>

class FileManager{
  public:
    void createFile(const std::string& filename) {
      std::ofstream file(filename);
      if(file){
        std::cout << filename <<" created successfully\n";
      }else{
        std::cout << filename <<" failed to create\n";
        }
      file.close();
    }

    void writeFile(const std::string& filename, const std::string& content) {
      // output or append
      std::ofstream file(filename, std::ios::out | std::ios::app);
      if(file){
        file << content << "\n";
        std::cout << filename << " written\n";
        } else {
          std::cout << filename << " failed to written\n";
        }
        file.close();
    }

    void readFile(const std::string& filename) {
      std::ifstream file(filename);
      if (file) {
        std::string line;
        while (getline(file, line)) {
          std::cout << line << "\n";
        }
        } else {
            std::cout << filename << " Failed to read\n";
        }
        file.close();
    }

    void deleteFile(const std::string& filename) {
      // remove uses const char * for string
      if (remove(filename.c_str()) == 0) {
        std::cout << filename << " deleted successfully\n";
        } else {
            std::cout << "Failed to delete file: " << filename << "\n";
        }
    }
};

int main() {
  FileManager fm;
  
  std::string filename = "example.txt";
  fm.createFile(filename);

  std::string content = "Hello, this is a test file.";
  fm.writeFile(filename, content);

  fm.readFile(filename);

  fm.deleteFile(filename);

  return 0;
}
