
# XTS Functionality for TT Blaze API


This repository contains the implementation of the TT Blaze Market Data API using C++. 

The API provides real-time stock market data, instrument subscriptions, market depth events, candle data, open interest events, and more.

This repository will contain a .cpp and .h file for each functionality to make function overriding more simple and follow strict OOPs properties


## Folder Structure

### 1. 'market_data_api' Directory

- `config`: Contains the two folders one for the config of products distributed by xts and the other is routes, which contains the paths for getting different api related backend functionality.
- `login`: Manages host look up and login to obtain authetication token and the token for each session.
- `market_data_api`: Provides example usage of the Market Data functionalities.
- `subscribe`: This contains a list of dictionaries of the exchange segment and instrument of id for whose id data will be subscribed.
- `web_socket`: Initializes the websocket instance to listen for data packets.
- `xts_message_codes`: Contains a list of all the codes of xts market data events.


## Documentation

- [Documentation](https://ttblaze.iifl.com/doc/marketdata/)


## References

- [CURL Usage](https://gist.github.com/alghanmi/c5d7b761b2c9ab199157)
- [CURL Post Usage](hhttps://curl.se/libcurl/c/CURLOPT_POST.html)
- [CURL Write function Usage](https://curl.se/libcurl/c/CURLOPT_WRITEFUNCTION.html)
- [Headers functionality](https://stackoverflow.com/questions/69494595/libcurl-how-to-update-a-specific-header-information-which-is-aleady-set)
- [Json functionality](https://sourceforge.net/p/jsoncpp/discussion/483465/thread/f49c6ba7/)


## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/siddhanth-mate-9b0127222/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/SiddhanthMate)
