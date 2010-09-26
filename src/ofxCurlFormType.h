#ifndef OFXCURLFORMTYPEH
#define OFXCURLFORMTYPEH
#include <string>
#include <curl/curl.h>
class ofxCurlForm;
class ofxCurlFormType {
public:
    ofxCurlFormType(std::string sName);
	std::string getName();
	void setName(std::string sName);
	
	// This method is called when the type needs to add itself to the form
	//--------------------------------------------------------------------------
	virtual void addToForm(
			ofxCurlForm* pForm
			,struct curl_httppost** pCurr
			,struct curl_httppost** pLast
	) = 0;
	
protected:
    std::string name;
};
#endif
