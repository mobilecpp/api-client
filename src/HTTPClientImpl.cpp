#include "HTTPClientImpl.hpp"
#include "HTTPResult.hpp"

namespace mobilecpp {

std::shared_ptr<HTTPClientImpl> HTTPClientImpl::mSharedInstance = nullptr;

HTTPClientImpl::HTTPClientImpl() {
  mBaseUrl = nullptr;
}

std::shared_ptr<HTTPClient> HTTPClient::sharedInstance() {
  return HTTPClientImpl::internalSharedInstance();
}

std::shared_ptr<HTTPClient> HTTPClientImpl::internalSharedInstance() {
  if (mSharedInstance == nullptr) {
    mSharedInstance = std::make_shared<HTTPClientImpl>();
  }
  return mSharedInstance;
}

std::string HTTPClientImpl::getBaseUrl() {
  return mBaseUrl;
}

void HTTPClientImpl::setBaseUrl(const std::string & baseUrl) {
  mBaseUrl = baseUrl;
}

void HTTPClientImpl::get(const std::string & url) {
  // TBD
}

void HTTPClientImpl::post(const std::string & url) {
  // TBD
}

}
