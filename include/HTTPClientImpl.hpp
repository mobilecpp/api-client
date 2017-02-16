#pragma once

#include "HTTPClient.hpp"

namespace mobilecpp {

class HTTPClientImpl : HTTPClient {
private:
  static std::shared_ptr<HTTPClientImpl> mSharedInstance;
  std::string mBaseUrl;

public:
  HTTPClientImpl();

  static std::shared_ptr<HTTPClient> sharedInstance();
  static std::shared_ptr<HTTPClientImpl> internalSharedInstance();
  virtual std::string getBaseUrl() override;
  virtual void setBaseUrl(const std::string & baseUrl) override;
  virtual void get(const std::string & url) override;
  virtual void post(const std::string & url) override;
}

}
