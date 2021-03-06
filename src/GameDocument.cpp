#include "GameDocument.hpp"


GameDocument::GameDocument(const PluginInterface* loader, const QString& file)
    : DocumentBase(loader, file),
      m_isWiiSave(false),
      m_keyManager(NULL)
{

}

GameDocument::~GameDocument()
{
}

QString GameDocument::game() const
{
    return "UNKNOWN";
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
