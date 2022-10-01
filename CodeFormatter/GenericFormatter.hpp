#ifndef GENERICFORMATTER_HPP
#define GENERICFORMATTER_HPP

#include "SourceFormatterBase.hpp"
#include "clCodeLiteRemoteProcess.hpp"

#include <vector>
#include <wx/arrstr.h>

/// A formatter based on a simple command execution
class GenericFormatter : public SourceFormatterBase
{
    wxArrayString m_command;
    wxArrayString m_remote_command;
    wxString m_workingDirectory;

public:
    GenericFormatter();
    virtual ~GenericFormatter();

    wxString GetSSHCommand() const;

    void FromJSON(const JSONItem& json) override;
    JSONItem ToJSON() const override;

    bool FormatFile(const wxFileName& filepath, FileExtManager::FileType file_type, wxString* output) const override;
    bool FormatFile(const wxString& filepath, FileExtManager::FileType file_type, wxString* output) const override;
    bool FormatRemoteFile(const wxString& filepath, FileExtManager::FileType file_type,
                          wxString* output) const override;

    bool CanHandleRemoteFile() const { return !m_remote_command.empty(); }

    /**
     * @brief format `content`
     * @param content string to format
     * @param fullpath the content's fullpath. the formatter uses this to determine the content type
     * @param output [out]
     */
    bool FormatString(const wxString& content, const wxString& fullpath, wxString* output) const override;

    void SetCommand(const wxArrayString& command) { this->m_command = command; }
    void SetCommand(const std::vector<wxString>& command);

    void SetRemoteCommand(const wxArrayString& command) { this->m_remote_command = command; }
    void SetRemoteCommand(const std::vector<wxString>& command);

    const wxArrayString& GetCommand() const { return m_command; }
    wxString GetCommandAsString() const;

    const wxArrayString& GetRemoteCommand() const { return m_remote_command; }
    wxString GetRemoteCommandAsString() const;

    void SetWorkingDirectory(const wxString& workingDirectory) { this->m_workingDirectory = workingDirectory; }
    const wxString& GetWorkingDirectory() const { return m_workingDirectory; }
};

#endif // GENERICFORMATTER_HPP
