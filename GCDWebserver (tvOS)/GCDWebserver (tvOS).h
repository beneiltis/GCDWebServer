//
//  GCDWebserver (tvOS).h
//  GCDWebserver (tvOS)
//
//  Created by Benedikt Iltisberger on 14.10.15.
//
//

#import <UIKit/UIKit.h>

//! Project version number for GCDWebserver (tvOS).
FOUNDATION_EXPORT double GCDWebserver__tvOS_VersionNumber;

//! Project version string for GCDWebserver (tvOS).
FOUNDATION_EXPORT const unsigned char GCDWebserver__tvOS_VersionString[];

// GCDWebServer Core
#import <GCDWebServers/GCDWebServer.h>
#import <GCDWebServers/GCDWebServerConnection.h>
#import <GCDWebServers/GCDWebServerFunctions.h>
#import <GCDWebServers/GCDWebServerHTTPStatusCodes.h>
#import <GCDWebServers/GCDWebServerResponse.h>
#import <GCDWebServers/GCDWebServerRequest.h>

// GCDWebServer Requests
#import <GCDWebServers/GCDWebServerDataRequest.h>
#import <GCDWebServers/GCDWebServerFileRequest.h>
#import <GCDWebServers/GCDWebServerMultiPartFormRequest.h>
#import <GCDWebServers/GCDWebServerURLEncodedFormRequest.h>

// GCDWebServer Responses
#import <GCDWebServers/GCDWebServerDataResponse.h>
#import <GCDWebServers/GCDWebServerErrorResponse.h>
#import <GCDWebServers/GCDWebServerFileResponse.h>
#import <GCDWebServers/GCDWebServerStreamedResponse.h>
