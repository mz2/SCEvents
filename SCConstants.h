/*
 *  $Id: SCConstants.h 195 2011-03-15 21:47:34Z stuart $
 *
 *  SCEvents
 *  http://stuconnolly.com/projects/code/
 *
 *  Copyright (c) 2011 Stuart Connolly. All rights reserved.
 *
 *  Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation
 *  files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 * 
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *  OTHER DEALINGS IN THE SOFTWARE.
 */

/* For convenience, we wrap up the event options defined in FSEvents.h into
 * an option type.
 */
typedef NS_OPTIONS(UInt32, SCEventStreamEventFlag) {
    SCEventStreamEventFlagNone              = 0x00000000,
    SCEventStreamEventFlagMustScanSubDirs   = 0x00000001,
    SCEventStreamEventFlagUserDropped       = 0x00000002,
    SCEventStreamEventFlagKernelDropped     = 0x00000004,
    SCEventStreamEventFlagEventIdsWrapped   = 0x00000008,
    SCEventStreamEventFlagHistoryDone       = 0x00000010,
    SCEventStreamEventFlagRootChanged       = 0x00000020,
    SCEventStreamEventFlagMount             = 0x00000040,
    SCEventStreamEventFlagUnmount           = 0x00000080,
    SCEventStreamEventFlagItemCreated       = 0x00000100,
    SCEventStreamEventFlagItemRemoved       = 0x00000200,
    SCEventStreamEventFlagItemInodeMetaMod  = 0x00000400,
    SCEventStreamEventFlagItemRenamed       = 0x00000800,
    SCEventStreamEventFlagItemModified      = 0x00001000,
    SCEventStreamEventFlagItemFinderInfoMod = 0x00002000,
    SCEventStreamEventFlagItemChangeOwner   = 0x00004000,
    SCEventStreamEventFlagItemXattrMod      = 0x00008000,
    SCEventStreamEventFlagItemIsFile        = 0x00010000,
    SCEventStreamEventFlagItemIsDir         = 0x00020000,
    SCEventStreamEventFlagItemIsSymlink     = 0x00040000,
    SCEventStreamEventFlagOwnEvent          = 0x00080000
};

/* In order to play nicely with Swift, we now let the "real" type name
 * be a prefix of the option names, which we want to keep basically on par
 * with the original flag names. However, for backwards compatibility, we
 * also allow the type name that was used previously.
 */
typedef SCEventStreamEventFlag SCEventFlags;
