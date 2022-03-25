#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FDCheckRealPerson.h"
#import "FDFaceBaseViewController.h"
#import "FDFaceDetect.h"
#import "FDFaceLoginViewController.h"
#import "FDFaceRegisterViewController.h"
#import "FDResult.h"
#import "NSString+Category.h"
#import "NSString+RemoveSpace.h"
#import "SLDropdownMenu.h"
#import "SLSearchBar.h"

FOUNDATION_EXPORT double CustomFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char CustomFrameworkVersionString[];

