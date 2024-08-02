#include "main.h"

std::filesystem::path current_wordking_directory = std::filesystem::current_path();
std::filesystem::path config_file_path = current_wordking_directory / "login_xts.ini";
const std::string config_file_path_str = config_file_path.sting();

// append works with C++98,11,14
size_t write_callback(void* contents, size_t size, size_t nmemb, std::string){
    userp->append((char*)contents, size*nmemb);
    return size*nmemb;
}


// adding a dynamic constructor 
MarketDataCredentials::MarketDataCredentials(
    const std::string& url,
    const std::string& access_password,
    const std::string& version,
    const std::string& secret_key,
    const std::string& api_key,
) : url(url), access_password(access_password), version(version), secret_key(secret_key), api_key(api_key) {
    // creating the directory for the .ini file here 
    std::filesystem::create_directories(std::filesystem::path(config_file_path_str).parent_path());
}

