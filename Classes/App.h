#import <Cocoa/Cocoa.h>

@interface App : NSObject {
    NSString *path;
    NSString *version;

    IBOutlet NSWindow *prefPanel;
    IBOutlet NSTextField *textField;
    IBOutlet NSPopUpButton *versionSelector;
}

-(IBAction)showPrefPanel:(id)sender;
-(IBAction)applyChange:(id)sender;

-(void)populatePopUp;
-(NSString *)applicationBundleName;

@end
