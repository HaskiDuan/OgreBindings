////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_OGRERESOURCEPROVIDER_H__
#define __GUI_OGRERESOURCEPROVIDER_H__


#include <OgreString.h>


////////////////////////////////////////////////////////////////////////////////////////////////////
/// Noesis resource provider implementation using OGRE resource manager
////////////////////////////////////////////////////////////////////////////////////////////////////
class OgreNsGuiResourceProvider: public Noesis::ResourceProvider
{
public:
    OgreNsGuiResourceProvider(const char* group);

    Noesis::Ptr<Noesis::IStream> RequestFile(const NsChar* name);

private:
    Ogre::String mGroup;
};


#endif
