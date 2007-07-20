/*
   Copyright (c) 2007 Chris J. Karr

   Permission is hereby granted, free of charge, to any person 
   obtaining a copy of this software and associated documentation 
   files (the "Software"), to deal in the Software without restriction, 
   including without limitation the rights to use, copy, modify, merge, 
   publish, distribute, sublicense, and/or sell copies of the Software, 
   and to permit persons to whom the Software is furnished to do so, 
   subject to the following conditions:

   The above copyright notice and this permission notice shall be 
   included in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
   NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS 
   BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN 
   ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
   SOFTWARE.
*/

#import <Cocoa/Cocoa.h>

@interface BooksToolbarDelegate : NSObject 
{
	IBOutlet NSView * searchField;
	IBOutlet NSSearchField * searchTextField;

	NSToolbarItem * getInfo;
	NSToolbarItem * getCover;
	NSToolbarItem * editSmartList;
	NSToolbarItem * newBook;
	NSToolbarItem * removeBook;
	NSToolbarItem * removeList;

	IBOutlet NSObject * booksAppDelegate;
}

- (NSToolbarItem *)toolbar:(NSToolbar *) toolbar itemForItemIdentifier:(NSString *) itemIdentifier willBeInsertedIntoToolbar:(BOOL) flag;
- (NSArray *)toolbarAllowedItemIdentifiers:(NSToolbar *) toolbar;
- (NSArray *)toolbarDefaultItemIdentifiers:(NSToolbar *) toolbar;

- (void) setGetCoverLabel:(NSString *) label;
- (void) setGetInfoLabel:(NSString *) label;

- (void) setNewBookAction:(SEL) action;
- (void) setRemoveBookAction:(SEL) action;
- (void) setEditSmartListAction:(SEL) action;
- (void) setRemoveListAction:(SEL) action;
- (void) setGetCoverAction:(SEL) action;

- (void) cancelSearch;

@end