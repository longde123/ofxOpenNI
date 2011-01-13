#pragma once

#include "ofMain.h"
#include <XnOpenNI.h>
#include <XnCodecIDs.h>
#include <XnCppWrapper.h>

class ofxDepthGenerator;

class ofxOpenNIContext {
public:
	ofxOpenNIContext();
	
	~ofxOpenNIContext();	


	void update();
	
	bool setup();
	
	bool setupUsingXMLFile(std::string sFile = "");
	
	bool setupUsingRecording(std::string sRecordedFile);
	
	xn::Context& getXnContext();
	
	bool getDepthGenerator(ofxDepthGenerator* pDepthGenerator);

	bool isUsingRecording();
	
	void addLicense(std::string sVendor, std::string sKey);
	
	void enableLogging();
private:
	bool is_using_recording;
	xn::Context context;
};
