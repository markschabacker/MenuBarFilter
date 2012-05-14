//
//  MenuBarFilterAppDelegate.h
//  MenuBarFilter
//
//  Created by eece on 24/02/2011.
//  Copyright 2011 eece. All rights reserved.
//  Copyright 2012 Wez Furlong
//

#include "MenuBarFilterWindow.h"

@interface MenuBarFilterAppDelegate : NSObject <NSApplicationDelegate> {

    IBOutlet NSMenu *statusMenu;    
    
@private
    MenuBarFilterWindow * invertWindow;
    MenuBarFilterWindow * hueWindow;
    BOOL visible;
    NSStatusItem *statusItem;
}

- (void) reposition;

@end
