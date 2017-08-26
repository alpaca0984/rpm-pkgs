Name:		alpaca-yum-repos
Version:	1
Release:	1%{?dist}
Summary:	Alpaca0984's Original Packages for CentOS

Group:		System Environment/Base
License:	GPLv2

URL:		https://github.com/alpaca0984/yum-repos
Source0:	alpaca-main.repo

BuildArch:     noarch
Requires:      redhat-release >= %{version}

%description


%prep
%setup -q  -c -T


%build


%install
rm -rf $RPM_BUILD_ROOT

# yum
install -dm 755 $RPM_BUILD_ROOT%{_sysconfdir}/yum.repos.d
install -pm 644 %{SOURCE0} \
    $RPM_BUILD_ROOT%{_sysconfdir}/yum.repos.d


%clean
rm -rf $RPM_BUILD_ROOT


%files
%defattr(-,root,root,-)
%doc
%config(noreplace) /etc/yum.repos.d/*



%changelog

