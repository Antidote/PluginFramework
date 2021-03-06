// This file is part of Sakura Suite.
//
// Sakura Suite is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Sakura Suite is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Sakura Suite.  If not, see <http://www.gnu.org/licenses/>

#ifndef GAMEDOCUMENT_HPP
#define GAMEDOCUMENT_HPP

#include "DocumentBase.hpp"

class WiiKeyManagerBase;

class GameDocument : public DocumentBase
{
    Q_OBJECT
public:
    GameDocument(const PluginInterface* loader, const QString& file = QString());
    virtual ~GameDocument();
    virtual QString game() const;
    virtual bool supportsWiiSave() const=0;
    virtual bool exportWiiSave()=0;
    virtual bool isWiiSave() const;
    virtual WiiKeyManagerBase* keyManager();
    virtual void setKeyManager(WiiKeyManagerBase* manager);
protected:
    bool m_isWiiSave;
    WiiKeyManagerBase* m_keyManager;
};

#endif // GAMEDOCUMENT_HPP
