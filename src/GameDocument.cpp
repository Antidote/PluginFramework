#include "GameDocument.hpp"


GameDocument::GameDocument(const PluginInterface* loader, const QString& file)
    : DocumentBase(loader, file),
      m_isWiiSave(false),
      m_keyManager(NULL)
{
<<<<<<< HEAD
=======

>>>>>>> 550991fca91d68fe4c30a9ea0dc8f731bd157a20
}

QString GameDocument::game() const
{
    return "UNKNOWN";
}

bool GameDocument::supportsWiiSave() const
{
    return false;
}

bool GameDocument::exportWiiSave()
{
    return false;
}

bool GameDocument::isWiiSave() const
{
    return m_isWiiSave;
}

WiiKeyManagerBase* GameDocument::keyManager()
{
    return m_keyManager;
}

void GameDocument::setKeyManager(WiiKeyManagerBase* manager)
{
    m_keyManager = manager;
}
